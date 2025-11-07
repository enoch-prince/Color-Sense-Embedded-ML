#ifndef COLORSENSEFEMODELRFC_EML_H
#define COLORSENSEFEMODELRFC_EML_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

// Predict color from 12 engineered features (all float)
// Input: float features[12] in order:
//   r_norm, g_norm, b_norm, r_g, r_b, g_b,
//   saturation, reflectance, colorfulness,
//   is_red, is_green, is_blue
// Returns: class index (0..N-1). Map to label using color_class_names[]
int8_t ColorSenseFEModelRFC_EML_predict(const float *features);

int8_t ColorSenseFEModelRFC_EML_predict_proba(const float *features, float *out, uint8_t out_length);

// Human-readable class names (in same order as indices)
extern const char* ColorSenseFEModelRFC_EML_class_names[];

#ifdef __cplusplus
}
#endif

#endif // COLORSENSEFEMODELRFC_EML_H
