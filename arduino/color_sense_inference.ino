/*
  
  Adapted from:
    ============================================
    D1 mini ESP8266 — LDR Color Checker (WS2812)
    By: HackMakeMod.com
    ============================================

  What this does:
  - Flashes a single WS2812 LED (white, red, green, blue) at a surface
  - Reads reflected light with an LDR on A0
  - Prints a clean debug line to Serial with everything needed to tune thresholds

  Hardware (tested wiring):
    • Board: LOLIN(WEMOS) D1 mini (ESP8266) | Arduino Nano
    • WS2812: 1 pixel on D4 (GPIO2)
    • LDR: voltage divider to A0 (typical 10k to GND, LDR to 3V3), optional small cap to smooth noise
    • Button: momentary to GND on D3, use INPUT_PULLUP (must be released at boot)

  Libraries:
    Adafruit_NeoPixel, Custom Random Forest Classifier Model (micromlgen & emlearn)

  Notes for makers:
  - The LDR does not “see” color directly, it sees intensity. By lighting the sample
    with R, G, B separately and comparing to white, you get a color “signature.”
  - LDRs tend to be strong in red, weak in blue. The LED also struggles to be as bright in blue.
    That’s why we drive R, G, B at different base values below.
  - To improve repeatability, this code takes three quick readings per color and uses the median.
    Median-of-3 kills the occasional spike without slowing things down.

  Tuning quick-start:
    • SENS_PCT   — overall LED drive. Keeps R:G:B ratio intact. Use 40..150.
    • WHITE_*    — when to call a sample “white.” If whites look like “orange/amber,”
                    loosen WHITE_EASE a bit or reduce WHITE_WRAW_MIN.
    • NEUTRAL / BROWN / TAN thresholds — at the “Helpers for naming” section,
                    tweak C8/Y/warm-bias and the hue windows for your materials.

  Serial output columns:
    White Red  Green  Blue  Total  Predicted
  Feature Names:
    ['black', 'blue', 'brown', 'green', 'grey', 'orange', 'pink', 'red', 'white', 'yellow']
  Keep Serial Monitor at 115200 baud. Great for plotting and threshold tuning.

  Author: Enoch Prince
*/

#include <Arduino.h>
#include <Adafruit_NeoPixel.h>
// #include "ColorSenseModelRFC.h"
// #include "ColorSenseModelXGB.h"
// #include "ColorSenseModelRFC_EML.h"
// #include "ColorSenseModelDTR.h" //uses micromlgen
// #include "ColorSenseModelDTR_EML.h" //uses emlearn
// #include "ColorSenseModelRFR.h"
#include "ColorSenseModelRFR_EML.h"  //uses emlearn -- This works

#define PIN_NEOPIXEL 4
#define BUTTON_PIN   3

// -------------------------------
// Global “knobs” you can turn
// -------------------------------

bool startRecording = false;
uint8_t buttonState = 1;
constexpr float NUM_OF_SAMPLES = 10.0; // 400ms per sample

// Overall brightness… single number. Preserves your R:G:B ratio below.
// Try 40 for dim tests, 80 for safe normal, 100 for baseline, 150 for bright.
const uint8_t SENS_PCT = 80;

// White detection… two checks:
// 1) Wraw must be bright enough (WHITE_WRAW_MIN)
// 2) Chroma (C8) must be low enough (WHITE_C8_MAX)
// We also allow small color cast with WHITE_EASE added to C8 limit.
const uint16_t WHITE_WRAW_MIN = 960;  // how bright it must look under white
const uint8_t  WHITE_C8_MAX   = 32;   // how “neutral” it must be (0 = perfectly neutral)
const uint8_t  WHITE_EASE     = 20;   // extra tolerance for off-whites (only affecting chroma)

// Base per-channel LED drive (before SENS_PCT scaling). These are your tuned ratios.
// Lower red if red overwhelms, raise blue if blue looks weak on your LDR.
const uint8_t LED_R = 53;
const uint8_t LED_G = 110;
const uint8_t LED_B = 250;
// const uint8_t LED_R = 88;
// const uint8_t LED_G = 110;
// const uint8_t LED_B = 180;

// How long to let the light and LDR settle before reading.
// You made these equal; keep white equal or longer if you see jitter.
const uint16_t SETTLE_W_MS   = 5;
const uint16_t SETTLE_RGB_MS = 5;

// Adafruit_SSD1306 display(SCREEN_W, SCREEN_H, &Wire, -1);
Adafruit_NeoPixel  px(1, PIN_NEOPIXEL, NEO_GRB + NEO_KHZ800);

// Eloquent::ML::Port::RandomForest ModelRFC;
// Eloquent::ML::Port::XGBClassifier ModelXGB;
// Eloquent::ML::Port::DecisionTreeRegressor ModelDTR;

// Computed LED values after SENS_PCT scaling
static uint8_t LED_RS, LED_GS, LED_BS;

// Array to store sensor values
const uint8_t NUM_OF_MODEL_FEATURES = 5;
int sensorReadings[NUM_OF_MODEL_FEATURES] = {0}; // used by emlearn
// float sensorReadings[NUM_OF_MODEL_FEATURES] = {0.0f}; // used by micromlgen

// Basic helpers
static inline uint8_t clamp255(long v){ return (uint8_t)(v < 0 ? 0 : (v > 255 ? 255 : v)); }
static inline uint8_t scalePct(uint16_t base, uint8_t pct){
  // Multiply then divide with rounding; guard the 255 max WS2812 expects
  uint32_t v = (uint32_t)base * pct + 50;
  v /= 100;
  if(v > 255) v = 255;
  return (uint8_t)v;
}
static inline void refreshScaled(){
  // Keep the R:G:B proportion, just scale the whole tripod with SENS_PCT
  LED_RS = scalePct(LED_R, SENS_PCT);
  LED_GS = scalePct(LED_G, SENS_PCT);
  LED_BS = scalePct(LED_B, SENS_PCT);
}

// -------------------------------
// LED control
// -------------------------------
static inline void ledOff(){ px.setPixelColor(0, 0); px.show(); }
static inline void ledR(){ px.setPixelColor(0, px.Color(LED_RS, 0, 0)); px.show(); }
static inline void ledG(){ px.setPixelColor(0, px.Color(0, LED_GS, 0)); px.show(); }
static inline void ledB(){ px.setPixelColor(0, px.Color(0, 0, LED_BS)); px.show(); }
static inline void ledW(){ px.setPixelColor(0, px.Color(LED_RS, LED_GS, LED_BS)); px.show(); }

// -------------------------------
// Stable sampling: median of 3
// Why median? It rejects a single bad spike without expensive averaging.
// -------------------------------
static inline uint16_t sampleWith(void (*fn)(), uint16_t settle){
  fn();                 // turn on the chosen color
  delay(settle);        // let LED and LDR settle
  uint16_t v = analogRead(A0);
  delay(2);
  ledOff();             // turn off quickly to avoid heating the LED or bleeding light
  return v;
}


static inline int readAverage(void (*fn)(), uint16_t settle) {
  float sum = 0.0;
  for (uint8_t i = 0; i < NUM_OF_SAMPLES; i++) {
    sum += sampleWith(fn, settle);
    delay(3);
  }
  return static_cast<int>(sum/NUM_OF_SAMPLES);
}

// “Reads” that the rest of the code uses
static inline int readW(){ return readAverage(ledW, SETTLE_W_MS); }
static inline int readR(){ return readAverage(ledR, SETTLE_RGB_MS); }
static inline int readG(){ return readAverage(ledG, SETTLE_RGB_MS); }
static inline int readB(){ return readAverage(ledB, SETTLE_RGB_MS); }

// Simple press-and-release debounce loop.
// Hold the button low to start a read, release to continue.
void waitButtonPressRelease(){                                           // deglitch
  if(digitalRead(BUTTON_PIN) != buttonState)  { 
    delay(25); // wait for release
    buttonState = digitalRead(BUTTON_PIN);
    if (buttonState == LOW)
      startRecording = !startRecording;
  } 
  delay(25);                                            // deglitch

}

// -------------------------------
// Arduino setup/loop
// -------------------------------
void setup(){
  pinMode(BUTTON_PIN, INPUT_PULLUP);      // button idle = HIGH, pressed = LOW
  // Wire.begin(D2, D1);                     // I2C pins for D1 mini
  // display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDR);

  px.begin();
  px.setBrightness(255);                  // keep driver at 255, we scale per-channel ourselves
  refreshScaled();                        // compute LED_RS/Gs/Bs from SENS_PCT

  Serial.begin(115200);
  delay(100);
  // Serial.println("Red\tGreen\tBlue\tHue\tChroma\tName");
  Serial.println("White,Red,Green,Blue,Total,Predicted_lable");
  // Serial.println("W_Raw\tR_Raw\tG_RAW\tB_Raw\tTotal | R_Norm\tG_Norm\tB_Norm");
}

void loop(){
  // Wait for a press-and-release so each scan is deliberate and repeatable
  waitButtonPressRelease();

  if (startRecording == false)
    return;
  // One full pass… each read is median-of-3 to stabilize the ADC and sensor
  sensorReadings[0] = readW();
  sensorReadings[1] = readR();
  sensorReadings[2] = readG();
  sensorReadings[3] = readB();

  // Your “spread” math… compares each color to the white level, then normalizes.
  sensorReadings[4] = (sensorReadings[0] - sensorReadings[1]) + (sensorReadings[0] - sensorReadings[2]) + (sensorReadings[0] - sensorReadings[3]);
  // if(Total < 1) Total = 1; // guard divide-by-zero

  // long R8i = 255 - (255L * (long)(Wraw - Rraw)) / Total;
  // long G8i = 255 - (255L * (long)(Wraw - Graw)) / Total;
  // long B8i = 255 - (255L * (long)(Wraw - Braw)) / Total;

  // uint8_t R8 = clamp255(R8i);
  // uint8_t G8 = clamp255(G8i);
  // uint8_t B8 = clamp255(B8i);

  // Serial row… compact, human-readable, easy to copy into a sheet
  // Serial.print((int)R8);  Serial.print('\t');
  // Serial.print((int)G8);  Serial.print('\t');
  // Serial.print((int)B8);  Serial.print('\t');
  // Serial.print(H, 1);     Serial.print('\t');
  // Serial.print(C8);       Serial.print('\t');
  // Serial.println(name);

  // Serial.println(); // blank spacer between scans 

  // uint8_t predictedColorId = ModelXGB.predict(sensorReadings); // micromlgen prediction
  // uint8_t predictedColorId = ModelDTR.predict(sensorReadings); // micromlgen prediction

  int predictedColorId = color_sense_predict(sensorReadings, NUM_OF_MODEL_FEATURES); // emlearn predition

  for (uint8_t i = 0; i < NUM_OF_MODEL_FEATURES; i++) {
    Serial.print(sensorReadings[i]);
    Serial.print(",");
  }

  // Serial.print(" | ");
  // Serial.print(R8);  Serial.print('\t');
  // Serial.print(G8);  Serial.print('\t');
  // Serial.print(B8);

  // Serial.println(ModelDTR.idxToLabel(predictedColorId)); // blank spacer between scans
  // Serial.println(ModelXGB.idxToLabel(predictedColorId)); // blank spacer between scans
  Serial.println(predictedColorId); // blank spacer between scans
  //'feature_names': ['black', 'blue', 'brown', 'green', 'grey', 'orange', 'pink', 'red', 'white', 'yellow']

//   Serial.print(F("Button State: "));
//   Serial.print(buttonState);
//   Serial.print(F(" | Record: "));
//   Serial.println(startRecording);
}
