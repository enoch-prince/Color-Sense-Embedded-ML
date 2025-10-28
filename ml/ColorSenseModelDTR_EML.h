


    // !!! This file is generated using emlearn !!!

    #include <stdint.h>
    

static inline float color_sense_tree_0(const int16_t *features, int32_t features_length) {
          if (features[1] < 130) {
              if (features[1] < 39) {
                  if (features[2] < 20) {
                      return 0.000000f;
                  } else {
                      if (features[4] < 98) {
                          if (features[1] < 31) {
                              return 2.000000f;
                          } else {
                              return 4.000000f;
                          }
                      } else {
                          return 1.000000f;
                      }
                  }
              } else {
                  if (features[3] < 122) {
                      if (features[4] < 106) {
                          if (features[4] < 32) {
                              if (features[2] < 64) {
                                  return 4.000000f;
                              } else {
                                  if (features[1] < 103) {
                                      return 5.000000f;
                                  } else {
                                      return 6.000000f;
                                  }
                              }
                          } else {
                              if (features[3] < 71) {
                                  return 2.000000f;
                              } else {
                                  return 3.000000f;
                              }
                          }
                      } else {
                          if (features[2] < 103) {
                              if (features[1] < 108) {
                                  if (features[3] < 105) {
                                      if (features[2] < 98) {
                                          return 4.000000f;
                                      } else {
                                          if (features[3] < 82) {
                                              return 3.000000f;
                                          } else {
                                              return 4.000000f;
                                          }
                                      }
                                  } else {
                                      return 1.000000f;
                                  }
                              } else {
                                  return 7.000000f;
                              }
                          } else {
                              return 3.000000f;
                          }
                      }
                  } else {
                      if (features[1] < 81) {
                          return 1.000000f;
                      } else {
                          return 8.000000f;
                      }
                  }
              }
          } else {
              if (features[0] < 267) {
                  if (features[1] < 172) {
                      if (features[2] < 70) {
                          return 7.000000f;
                      } else {
                          if (features[1] < 134) {
                              return 3.000000f;
                          } else {
                              if (features[3] < 67) {
                                  return 5.000000f;
                              } else {
                                  if (features[2] < 140) {
                                      return 6.000000f;
                                  } else {
                                      if (features[3] < 140) {
                                          return 9.000000f;
                                      } else {
                                          return 8.000000f;
                                      }
                                  }
                              }
                          }
                      }
                  } else {
                      if (features[2] < 152) {
                          if (features[3] < 96) {
                              return 5.000000f;
                          } else {
                              return 6.000000f;
                          }
                      } else {
                          return 9.000000f;
                      }
                  }
              } else {
                  if (features[3] < 150) {
                      return 9.000000f;
                  } else {
                      return 8.000000f;
                  }
              }
          }
        }
        

static const uint8_t color_sense_leaves[40] = { 0, 0, 0, 0, 0, 0, 128, 63, 0, 0, 0, 64, 0, 0, 128, 64, 0, 0, 160, 64, 0, 0, 192, 64, 0, 0, 64, 64, 0, 0, 224, 64, 0, 0, 0, 65, 0, 0, 16, 65 };

float color_sense_predict(const int16_t *features, int32_t features_length) {

        float avg = 0;

        avg += color_sense_tree_0(features, features_length); 
        
        return avg/1;
    }
    