#include "ColorSenseFEModelRFC_EML.h"



    // !!! This file is generated using emlearn !!!

    #include <stdint.h>
    

static inline int32_t ColorSenseFEModelRFC_EML_tree_0(const int16_t *features, int32_t features_length) {
          if (features[2] < 0) {
              if (features[4] < 1) {
                  if (features[1] < 0) {
                      return 4;
                  } else {
                      return 3;
                  }
              } else {
                  if (features[6] < 0) {
                      if (features[0] < 0) {
                          if (features[4] < 1) {
                              return 4;
                          } else {
                              return 2;
                          }
                      } else {
                          if (features[3] < 1) {
                              if (features[8] < 1) {
                                  if (features[1] < 0) {
                                      if (features[5] < 1) {
                                          return 6;
                                      } else {
                                          return 2;
                                      }
                                  } else {
                                      return 9;
                                  }
                              } else {
                                  if (features[5] < 1) {
                                      if (features[2] < 0) {
                                          return 2;
                                      } else {
                                          return 6;
                                      }
                                  } else {
                                      return 9;
                                  }
                              }
                          } else {
                              if (features[6] < 0) {
                                  if (features[3] < 1) {
                                      if (features[8] < 1) {
                                          return 6;
                                      } else {
                                          return 2;
                                      }
                                  } else {
                                      if (features[8] < 1) {
                                          return 6;
                                      } else {
                                          return 2;
                                      }
                                  }
                              } else {
                                  return 6;
                              }
                          }
                      }
                  } else {
                      if (features[7] < 0) {
                          if (features[3] < 2) {
                              return 5;
                          } else {
                              if (features[1] < 0) {
                                  return 7;
                              } else {
                                  return 5;
                              }
                          }
                      } else {
                          if (features[5] < 1) {
                              return 7;
                          } else {
                              return 5;
                          }
                      }
                  }
              }
          } else {
              if (features[2] < 0) {
                  if (features[0] < 0) {
                      if (features[1] < 0) {
                          return 4;
                      } else {
                          if (features[8] < 1) {
                              return 3;
                          } else {
                              return 8;
                          }
                      }
                  } else {
                      return 8;
                  }
              } else {
                  if (features[5] < 0) {
                      if (features[8] < 1) {
                          return 1;
                      } else {
                          if (features[5] < 0) {
                              return 1;
                          } else {
                              return 0;
                          }
                      }
                  } else {
                      if (features[4] < 0) {
                          if (features[7] < 0) {
                              return 8;
                          } else {
                              if (features[2] < 0) {
                                  if (features[4] < 0) {
                                      if (features[0] < 0) {
                                          return 8;
                                      } else {
                                          return 4;
                                      }
                                  } else {
                                      return 0;
                                  }
                              } else {
                                  if (features[1] < 0) {
                                      return 0;
                                  } else {
                                      if (features[3] < 0) {
                                          return 0;
                                      } else {
                                          return 4;
                                      }
                                  }
                              }
                          }
                      } else {
                          if (features[6] < 0) {
                              if (features[7] < 0) {
                                  if (features[0] < 0) {
                                      return 8;
                                  } else {
                                      if (features[8] < 1) {
                                          return 8;
                                      } else {
                                          return 4;
                                      }
                                  }
                              } else {
                                  if (features[0] < 0) {
                                      return 8;
                                  } else {
                                      if (features[8] < 1) {
                                          if (features[8] < 1) {
                                              return 4;
                                          } else {
                                              return 8;
                                          }
                                      } else {
                                          return 4;
                                      }
                                  }
                              }
                          } else {
                              if (features[8] < 1) {
                                  if (features[7] < 0) {
                                      if (features[6] < 0) {
                                          return 4;
                                      } else {
                                          if (features[5] < 0) {
                                              if (features[6] < 0) {
                                                  return 8;
                                              } else {
                                                  return 4;
                                              }
                                          } else {
                                              return 4;
                                          }
                                      }
                                  } else {
                                      if (features[3] < 0) {
                                          return 4;
                                      } else {
                                          if (features[8] < 1) {
                                              return 4;
                                          } else {
                                              return 8;
                                          }
                                      }
                                  }
                              } else {
                                  if (features[7] < 0) {
                                      return 4;
                                  } else {
                                      return 0;
                                  }
                              }
                          }
                      }
                  }
              }
          }
        }
        

static inline int32_t ColorSenseFEModelRFC_EML_tree_1(const int16_t *features, int32_t features_length) {
          if (features[2] < 0) {
              if (features[8] < 1) {
                  if (features[3] < 1) {
                      if (features[5] < 1) {
                          if (features[3] < 1) {
                              return 4;
                          } else {
                              return 6;
                          }
                      } else {
                          if (features[4] < 1) {
                              return 3;
                          } else {
                              if (features[1] < 0) {
                                  if (features[2] < 0) {
                                      return 5;
                                  } else {
                                      return 2;
                                  }
                              } else {
                                  return 9;
                              }
                          }
                      }
                  } else {
                      return 7;
                  }
              } else {
                  if (features[4] < 2) {
                      if (features[6] < 0) {
                          if (features[4] < 1) {
                              return 9;
                          } else {
                              if (features[6] < 0) {
                                  if (features[8] < 2) {
                                      if (features[3] < 1) {
                                          return 9;
                                      } else {
                                          return 6;
                                      }
                                  } else {
                                      return 2;
                                  }
                              } else {
                                  if (features[1] < 0) {
                                      return 6;
                                  } else {
                                      return 2;
                                  }
                              }
                          }
                      } else {
                          if (features[2] < 0) {
                              return 9;
                          } else {
                              return 6;
                          }
                      }
                  } else {
                      if (features[2] < 0) {
                          if (features[8] < 1) {
                              if (features[6] < 0) {
                                  return 5;
                              } else {
                                  if (features[8] < 1) {
                                      return 5;
                                  } else {
                                      return 7;
                                  }
                              }
                          } else {
                              return 5;
                          }
                      } else {
                          return 7;
                      }
                  }
              }
          } else {
              if (features[0] < 0) {
                  if (features[3] < 0) {
                      if (features[4] < 0) {
                          return 1;
                      } else {
                          if (features[2] < 0) {
                              return 3;
                          } else {
                              if (features[5] < 0) {
                                  return 0;
                              } else {
                                  if (features[8] < 1) {
                                      return 0;
                                  } else {
                                      if (features[8] < 2) {
                                          return 4;
                                      } else {
                                          return 8;
                                      }
                                  }
                              }
                          }
                      }
                  } else {
                      if (features[6] < 0) {
                          if (features[2] < 0) {
                              return 8;
                          } else {
                              if (features[8] < 1) {
                                  if (features[8] < 1) {
                                      if (features[2] < 0) {
                                          return 4;
                                      } else {
                                          if (features[7] < 0) {
                                              if (features[0] < 0) {
                                                  return 4;
                                              } else {
                                                  return 8;
                                              }
                                          } else {
                                              if (features[1] < 0) {
                                                  return 4;
                                              } else {
                                                  return 4;
                                              }
                                          }
                                      }
                                  } else {
                                      if (features[5] < 0) {
                                          return 8;
                                      } else {
                                          return 4;
                                      }
                                  }
                              } else {
                                  if (features[2] < 0) {
                                      if (features[6] < 0) {
                                          return 4;
                                      } else {
                                          return 8;
                                      }
                                  } else {
                                      if (features[8] < 1) {
                                          if (features[7] < 0) {
                                              if (features[2] < 0) {
                                                  return 4;
                                              } else {
                                                  return 8;
                                              }
                                          } else {
                                              return 4;
                                          }
                                      } else {
                                          if (features[1] < 0) {
                                              if (features[0] < 0) {
                                                  return 4;
                                              } else {
                                                  return 4;
                                              }
                                          } else {
                                              return 4;
                                          }
                                      }
                                  }
                              }
                          }
                      } else {
                          if (features[6] < 0) {
                              if (features[2] < 0) {
                                  if (features[6] < 0) {
                                      return 0;
                                  } else {
                                      if (features[0] < 0) {
                                          return 8;
                                      } else {
                                          return 4;
                                      }
                                  }
                              } else {
                                  if (features[3] < 0) {
                                      return 8;
                                  } else {
                                      return 0;
                                  }
                              }
                          } else {
                              return 1;
                          }
                      }
                  }
              } else {
                  if (features[2] < 0) {
                      if (features[5] < 0) {
                          return 6;
                      } else {
                          if (features[4] < 1) {
                              return 8;
                          } else {
                              if (features[0] < 0) {
                                  return 8;
                              } else {
                                  if (features[3] < 1) {
                                      if (features[8] < 1) {
                                          return 8;
                                      } else {
                                          return 4;
                                      }
                                  } else {
                                      return 8;
                                  }
                              }
                          }
                      }
                  } else {
                      if (features[7] < 0) {
                          return 4;
                      } else {
                          if (features[4] < 0) {
                              if (features[8] < 1) {
                                  return 0;
                              } else {
                                  if (features[3] < 1) {
                                      return 8;
                                  } else {
                                      return 4;
                                  }
                              }
                          } else {
                              if (features[7] < 0) {
                                  return 4;
                              } else {
                                  if (features[7] < 0) {
                                      return 8;
                                  } else {
                                      return 4;
                                  }
                              }
                          }
                      }
                  }
              }
          }
        }
        

static inline int32_t ColorSenseFEModelRFC_EML_tree_2(const int16_t *features, int32_t features_length) {
          if (features[2] < 0) {
              if (features[1] < 0) {
                  if (features[4] < 2) {
                      return 6;
                  } else {
                      if (features[5] < 1) {
                          return 7;
                      } else {
                          return 5;
                      }
                  }
              } else {
                  if (features[4] < 1) {
                      return 3;
                  } else {
                      if (features[1] < 0) {
                          if (features[2] < 0) {
                              return 2;
                          } else {
                              return 4;
                          }
                      } else {
                          return 9;
                      }
                  }
              }
          } else {
              if (features[9] < 0) {
                  if (features[4] < 0) {
                      if (features[1] < 0) {
                          return 1;
                      } else {
                          return 3;
                      }
                  } else {
                      if (features[4] < 0) {
                          if (features[3] < 0) {
                              return 3;
                          } else {
                              if (features[2] < 0) {
                                  if (features[1] < 0) {
                                      if (features[8] < 1) {
                                          return 4;
                                      } else {
                                          return 0;
                                      }
                                  } else {
                                      return 8;
                                  }
                              } else {
                                  if (features[1] < 0) {
                                      return 0;
                                  } else {
                                      if (features[4] < 0) {
                                          if (features[7] < 0) {
                                              if (features[2] < 0) {
                                                  return 4;
                                              } else {
                                                  return 8;
                                              }
                                          } else {
                                              return 0;
                                          }
                                      } else {
                                          return 4;
                                      }
                                  }
                              }
                          }
                      } else {
                          if (features[3] < 0) {
                              if (features[4] < 0) {
                                  if (features[5] < 0) {
                                      if (features[6] < 0) {
                                          if (features[2] < 0) {
                                              return 4;
                                          } else {
                                              return 8;
                                          }
                                      } else {
                                          return 4;
                                      }
                                  } else {
                                      if (features[2] < 0) {
                                          return 4;
                                      } else {
                                          if (features[6] < 0) {
                                              return 8;
                                          } else {
                                              return 4;
                                          }
                                      }
                                  }
                              } else {
                                  return 8;
                              }
                          } else {
                              if (features[10] < 0) {
                                  if (features[1] < 0) {
                                      if (features[3] < 0) {
                                          return 0;
                                      } else {
                                          return 4;
                                      }
                                  } else {
                                      if (features[4] < 0) {
                                          if (features[6] < 0) {
                                              if (features[3] < 0) {
                                                  return 8;
                                              } else {
                                                  return 4;
                                              }
                                          } else {
                                              return 8;
                                          }
                                      } else {
                                          return 8;
                                      }
                                  }
                              } else {
                                  return 8;
                              }
                          }
                      }
                  }
              } else {
                  if (features[8] < 2) {
                      return 8;
                  } else {
                      return 6;
                  }
              }
          }
        }
        

static inline int32_t ColorSenseFEModelRFC_EML_tree_3(const int16_t *features, int32_t features_length) {
          if (features[2] < 0) {
              if (features[7] < 0) {
                  if (features[6] < 0) {
                      if (features[0] < 0) {
                          if (features[1] < 0) {
                              if (features[5] < 1) {
                                  return 6;
                              } else {
                                  return 2;
                              }
                          } else {
                              if (features[8] < 2) {
                                  return 9;
                              } else {
                                  return 2;
                              }
                          }
                      } else {
                          if (features[8] < 2) {
                              return 9;
                          } else {
                              return 6;
                          }
                      }
                  } else {
                      if (features[8] < 2) {
                          if (features[1] < 0) {
                              return 7;
                          } else {
                              return 5;
                          }
                      } else {
                          if (features[0] < 0) {
                              return 7;
                          } else {
                              return 5;
                          }
                      }
                  }
              } else {
                  if (features[4] < 2) {
                      if (features[1] < 0) {
                          if (features[2] < 0) {
                              return 5;
                          } else {
                              return 6;
                          }
                      } else {
                          if (features[3] < 0) {
                              return 3;
                          } else {
                              if (features[4] < 1) {
                                  return 4;
                              } else {
                                  if (features[3] < 1) {
                                      return 9;
                                  } else {
                                      return 2;
                                  }
                              }
                          }
                      }
                  } else {
                      if (features[0] < 0) {
                          return 5;
                      } else {
                          return 7;
                      }
                  }
              }
          } else {
              if (features[2] < 0) {
                  if (features[0] < 0) {
                      if (features[5] < 1) {
                          return 4;
                      } else {
                          if (features[6] < 0) {
                              return 8;
                          } else {
                              return 3;
                          }
                      }
                  } else {
                      if (features[6] < 0) {
                          if (features[0] < 0) {
                              return 8;
                          } else {
                              if (features[7] < 0) {
                                  return 4;
                              } else {
                                  return 8;
                              }
                          }
                      } else {
                          return 6;
                      }
                  }
              } else {
                  if (features[2] < 0) {
                      if (features[2] < 0) {
                          if (features[0] < 0) {
                              if (features[6] < 0) {
                                  if (features[2] < 0) {
                                      if (features[4] < 0) {
                                          if (features[2] < 0) {
                                              return 8;
                                          } else {
                                              return 4;
                                          }
                                      } else {
                                          if (features[8] < 1) {
                                              if (features[3] < 0) {
                                                  return 4;
                                              } else {
                                                  return 4;
                                              }
                                          } else {
                                              return 4;
                                          }
                                      }
                                  } else {
                                      if (features[2] < 0) {
                                          return 8;
                                      } else {
                                          return 4;
                                      }
                                  }
                              } else {
                                  return 3;
                              }
                          } else {
                              if (features[8] < 1) {
                                  if (features[0] < 0) {
                                      return 8;
                                  } else {
                                      return 4;
                                  }
                              } else {
                                  return 4;
                              }
                          }
                      } else {
                          if (features[5] < 1) {
                              if (features[5] < 0) {
                                  return 0;
                              } else {
                                  if (features[2] < 0) {
                                      return 0;
                                  } else {
                                      if (features[0] < 0) {
                                          return 0;
                                      } else {
                                          if (features[5] < 0) {
                                              return 4;
                                          } else {
                                              if (features[4] < 0) {
                                                  return 8;
                                              } else {
                                                  return 4;
                                              }
                                          }
                                      }
                                  }
                              }
                          } else {
                              return 3;
                          }
                      }
                  } else {
                      return 1;
                  }
              }
          }
        }
        

static inline int32_t ColorSenseFEModelRFC_EML_tree_4(const int16_t *features, int32_t features_length) {
          if (features[6] < 0) {
              if (features[1] < 0) {
                  if (features[6] < 0) {
                      return 8;
                  } else {
                      if (features[4] < 0) {
                          if (features[7] < 0) {
                              return 4;
                          } else {
                              if (features[4] < 0) {
                                  return 4;
                              } else {
                                  return 0;
                              }
                          }
                      } else {
                          return 4;
                      }
                  }
              } else {
                  if (features[3] < 0) {
                      if (features[1] < 0) {
                          return 8;
                      } else {
                          if (features[2] < 0) {
                              return 8;
                          } else {
                              if (features[6] < 0) {
                                  if (features[5] < 0) {
                                      if (features[4] < 0) {
                                          return 4;
                                      } else {
                                          return 8;
                                      }
                                  } else {
                                      return 4;
                                  }
                              } else {
                                  if (features[11] < 0) {
                                      return 4;
                                  } else {
                                      return 8;
                                  }
                              }
                          }
                      }
                  } else {
                      if (features[2] < 0) {
                          return 8;
                      } else {
                          if (features[6] < 0) {
                              if (features[7] < 0) {
                                  return 4;
                              } else {
                                  if (features[7] < 0) {
                                      return 8;
                                  } else {
                                      return 4;
                                  }
                              }
                          } else {
                              return 8;
                          }
                      }
                  }
              }
          } else {
              if (features[2] < 0) {
                  if (features[4] < 2) {
                      if (features[3] < 1) {
                          if (features[8] < 1) {
                              if (features[2] < 0) {
                                  if (features[6] < 0) {
                                      return 9;
                                  } else {
                                      if (features[1] < 0) {
                                          return 2;
                                      } else {
                                          return 9;
                                      }
                                  }
                              } else {
                                  if (features[5] < 1) {
                                      if (features[4] < 1) {
                                          return 4;
                                      } else {
                                          return 6;
                                      }
                                  } else {
                                      return 3;
                                  }
                              }
                          } else {
                              if (features[1] < 0) {
                                  if (features[5] < 1) {
                                      return 6;
                                  } else {
                                      return 2;
                                  }
                              } else {
                                  if (features[7] < 0) {
                                      return 3;
                                  } else {
                                      return 9;
                                  }
                              }
                          }
                      } else {
                          if (features[1] < 0) {
                              return 6;
                          } else {
                              return 2;
                          }
                      }
                  } else {
                      if (features[1] < 0) {
                          return 7;
                      } else {
                          return 5;
                      }
                  }
              } else {
                  if (features[4] < 0) {
                      if (features[3] < 0) {
                          return 3;
                      } else {
                          return 1;
                      }
                  } else {
                      if (features[8] < 2) {
                          if (features[2] < 0) {
                              if (features[8] < 1) {
                                  return 4;
                              } else {
                                  if (features[5] < 0) {
                                      if (features[8] < 1) {
                                          return 8;
                                      } else {
                                          return 0;
                                      }
                                  } else {
                                      return 0;
                                  }
                              }
                          } else {
                              if (features[7] < 0) {
                                  if (features[2] < 0) {
                                      return 4;
                                  } else {
                                      return 0;
                                  }
                              } else {
                                  if (features[4] < 0) {
                                      return 0;
                                  } else {
                                      if (features[5] < 0) {
                                          return 0;
                                      } else {
                                          return 4;
                                      }
                                  }
                              }
                          }
                      } else {
                          if (features[5] < 0) {
                              return 0;
                          } else {
                              if (features[8] < 2) {
                                  return 8;
                              } else {
                                  return 4;
                              }
                          }
                      }
                  }
              }
          }
        }
        

static inline int32_t ColorSenseFEModelRFC_EML_tree_5(const int16_t *features, int32_t features_length) {
          if (features[1] < 0) {
              if (features[5] < 0) {
                  if (features[4] < 0) {
                      return 1;
                  } else {
                      return 0;
                  }
              } else {
                  if (features[6] < 0) {
                      if (features[1] < 0) {
                          return 6;
                      } else {
                          if (features[3] < 0) {
                              return 0;
                          } else {
                              return 4;
                          }
                      }
                  } else {
                      if (features[5] < 1) {
                          return 7;
                      } else {
                          return 5;
                      }
                  }
              }
          } else {
              if (features[2] < 0) {
                  if (features[8] < 1) {
                      if (features[2] < 0) {
                          if (features[0] < 0) {
                              return 9;
                          } else {
                              if (features[1] < 0) {
                                  return 2;
                              } else {
                                  return 9;
                              }
                          }
                      } else {
                          if (features[6] < 0) {
                              return 4;
                          } else {
                              return 3;
                          }
                      }
                  } else {
                      if (features[6] < 0) {
                          if (features[1] < 0) {
                              return 2;
                          } else {
                              return 9;
                          }
                      } else {
                          return 9;
                      }
                  }
              } else {
                  if (features[0] < 0) {
                      if (features[6] < 0) {
                          if (features[5] < 1) {
                              if (features[3] < 0) {
                                  if (features[8] < 1) {
                                      if (features[6] < 0) {
                                          if (features[7] < 0) {
                                              return 4;
                                          } else {
                                              if (features[0] < 0) {
                                                  return 4;
                                              } else {
                                                  return 4;
                                              }
                                          }
                                      } else {
                                          if (features[4] < 0) {
                                              return 4;
                                          } else {
                                              return 8;
                                          }
                                      }
                                  } else {
                                      if (features[7] < 0) {
                                          return 4;
                                      } else {
                                          return 8;
                                      }
                                  }
                              } else {
                                  if (features[5] < 0) {
                                      return 4;
                                  } else {
                                      return 8;
                                  }
                              }
                          } else {
                              return 8;
                          }
                      } else {
                          if (features[2] < 0) {
                              return 3;
                          } else {
                              if (features[5] < 0) {
                                  if (features[7] < 0) {
                                      if (features[0] < 0) {
                                          return 8;
                                      } else {
                                          return 4;
                                      }
                                  } else {
                                      if (features[2] < 0) {
                                          if (features[1] < 0) {
                                              return 4;
                                          } else {
                                              return 0;
                                          }
                                      } else {
                                          return 0;
                                      }
                                  }
                              } else {
                                  return 8;
                              }
                          }
                      }
                  } else {
                      if (features[1] < 0) {
                          if (features[3] < 1) {
                              if (features[2] < 0) {
                                  return 4;
                              } else {
                                  return 8;
                              }
                          } else {
                              return 8;
                          }
                      } else {
                          return 8;
                      }
                  }
              }
          }
        }
        

static inline int32_t ColorSenseFEModelRFC_EML_tree_6(const int16_t *features, int32_t features_length) {
          if (features[2] < 0) {
              if (features[9] < 0) {
                  if (features[5] < 1) {
                      return 3;
                  } else {
                      return 9;
                  }
              } else {
                  if (features[6] < 0) {
                      if (features[3] < 1) {
                          if (features[3] < 1) {
                              if (features[6] < 0) {
                                  return 4;
                              } else {
                                  if (features[1] < 0) {
                                      return 2;
                                  } else {
                                      return 9;
                                  }
                              }
                          } else {
                              if (features[4] < 1) {
                                  return 6;
                              } else {
                                  if (features[0] < 0) {
                                      return 2;
                                  } else {
                                      return 9;
                                  }
                              }
                          }
                      } else {
                          if (features[1] < 0) {
                              return 6;
                          } else {
                              return 2;
                          }
                      }
                  } else {
                      if (features[3] < 2) {
                          if (features[1] < 0) {
                              return 7;
                          } else {
                              return 5;
                          }
                      } else {
                          if (features[8] < 1) {
                              return 7;
                          } else {
                              return 5;
                          }
                      }
                  }
              }
          } else {
              if (features[4] < 0) {
                  if (features[0] < 0) {
                      if (features[11] < 0) {
                          return 3;
                      } else {
                          return 1;
                      }
                  } else {
                      if (features[4] < 0) {
                          if (features[10] < 0) {
                              if (features[0] < 0) {
                                  if (features[7] < 0) {
                                      if (features[8] < 2) {
                                          return 8;
                                      } else {
                                          return 0;
                                      }
                                  } else {
                                      if (features[6] < 0) {
                                          return 8;
                                      } else {
                                          return 0;
                                      }
                                  }
                              } else {
                                  if (features[5] < 0) {
                                      return 0;
                                  } else {
                                      if (features[5] < 0) {
                                          if (features[1] < 0) {
                                              return 4;
                                          } else {
                                              return 8;
                                          }
                                      } else {
                                          return 0;
                                      }
                                  }
                              }
                          } else {
                              return 3;
                          }
                      } else {
                          if (features[2] < 0) {
                              if (features[6] < 0) {
                                  return 4;
                              } else {
                                  return 8;
                              }
                          } else {
                              if (features[0] < 0) {
                                  if (features[8] < 1) {
                                      if (features[7] < 0) {
                                          return 8;
                                      } else {
                                          return 4;
                                      }
                                  } else {
                                      if (features[8] < 1) {
                                          if (features[7] < 0) {
                                              return 8;
                                          } else {
                                              if (features[6] < 0) {
                                                  return 4;
                                              } else {
                                                  return 8;
                                              }
                                          }
                                      } else {
                                          if (features[1] < 0) {
                                              if (features[0] < 0) {
                                                  return 4;
                                              } else {
                                                  return 0;
                                              }
                                          } else {
                                              return 4;
                                          }
                                      }
                                  }
                              } else {
                                  if (features[3] < 0) {
                                      return 8;
                                  } else {
                                      if (features[8] < 1) {
                                          if (features[7] < 0) {
                                              return 8;
                                          } else {
                                              return 4;
                                          }
                                      } else {
                                          return 4;
                                      }
                                  }
                              }
                          }
                      }
                  }
              } else {
                  if (features[7] < 0) {
                      return 4;
                  } else {
                      if (features[0] < 0) {
                          return 8;
                      } else {
                          if (features[2] < 0) {
                              return 8;
                          } else {
                              if (features[8] < 1) {
                                  return 8;
                              } else {
                                  return 4;
                              }
                          }
                      }
                  }
              }
          }
        }
        

static inline int32_t ColorSenseFEModelRFC_EML_tree_7(const int16_t *features, int32_t features_length) {
          if (features[2] < 0) {
              if (features[2] < 0) {
                  if (features[5] < 1) {
                      return 7;
                  } else {
                      if (features[0] < 0) {
                          return 9;
                      } else {
                          return 5;
                      }
                  }
              } else {
                  if (features[7] < 0) {
                      if (features[6] < 0) {
                          if (features[6] < 0) {
                              if (features[3] < 1) {
                                  return 2;
                              } else {
                                  return 6;
                              }
                          } else {
                              return 9;
                          }
                      } else {
                          if (features[3] < 1) {
                              return 2;
                          } else {
                              return 6;
                          }
                      }
                  } else {
                      if (features[0] < 0) {
                          if (features[0] < 0) {
                              return 3;
                          } else {
                              if (features[7] < 0) {
                                  return 9;
                              } else {
                                  return 4;
                              }
                          }
                      } else {
                          if (features[5] < 1) {
                              return 6;
                          } else {
                              return 2;
                          }
                      }
                  }
              }
          } else {
              if (features[4] < 0) {
                  if (features[7] < 0) {
                      if (features[4] < 0) {
                          if (features[11] < 0) {
                              return 3;
                          } else {
                              if (features[6] < 0) {
                                  return 4;
                              } else {
                                  if (features[7] < 0) {
                                      if (features[5] < 0) {
                                          if (features[4] < 0) {
                                              return 1;
                                          } else {
                                              return 0;
                                          }
                                      } else {
                                          if (features[7] < 0) {
                                              return 4;
                                          } else {
                                              return 8;
                                          }
                                      }
                                  } else {
                                      if (features[6] < 0) {
                                          if (features[6] < 0) {
                                              return 0;
                                          } else {
                                              return 8;
                                          }
                                      } else {
                                          if (features[6] < 0) {
                                              if (features[2] < 0) {
                                                  return 4;
                                              } else {
                                                  return 0;
                                              }
                                          } else {
                                              return 0;
                                          }
                                      }
                                  }
                              }
                          }
                      } else {
                          if (features[1] < 0) {
                              if (features[5] < 0) {
                                  if (features[7] < 0) {
                                      if (features[8] < 1) {
                                          return 0;
                                      } else {
                                          return 4;
                                      }
                                  } else {
                                      return 4;
                                  }
                              } else {
                                  if (features[8] < 1) {
                                      if (features[0] < 0) {
                                          return 8;
                                      } else {
                                          return 4;
                                      }
                                  } else {
                                      return 4;
                                  }
                              }
                          } else {
                              if (features[4] < 0) {
                                  if (features[0] < 0) {
                                      return 4;
                                  } else {
                                      return 8;
                                  }
                              } else {
                                  return 4;
                              }
                          }
                      }
                  } else {
                      if (features[0] < 0) {
                          return 1;
                      } else {
                          return 0;
                      }
                  }
              } else {
                  if (features[8] < 1) {
                      if (features[0] < 0) {
                          return 8;
                      } else {
                          if (features[2] < 0) {
                              return 8;
                          } else {
                              if (features[7] < 0) {
                                  return 4;
                              } else {
                                  return 8;
                              }
                          }
                      }
                  } else {
                      if (features[0] < 0) {
                          return 4;
                      } else {
                          return 6;
                      }
                  }
              }
          }
        }
        

static inline int32_t ColorSenseFEModelRFC_EML_tree_8(const int16_t *features, int32_t features_length) {
          if (features[1] < 0) {
              if (features[2] < 0) {
                  if (features[6] < 0) {
                      if (features[1] < 0) {
                          return 6;
                      } else {
                          if (features[6] < 0) {
                              if (features[5] < 0) {
                                  return 0;
                              } else {
                                  return 4;
                              }
                          } else {
                              return 4;
                          }
                      }
                  } else {
                      if (features[4] < 3) {
                          if (features[1] < 0) {
                              return 7;
                          } else {
                              return 5;
                          }
                      } else {
                          return 5;
                      }
                  }
              } else {
                  if (features[4] < 0) {
                      return 1;
                  } else {
                      return 0;
                  }
              }
          } else {
              if (features[6] < 0) {
                  if (features[0] < 0) {
                      if (features[0] < 0) {
                          if (features[5] < 1) {
                              if (features[6] < 0) {
                                  if (features[7] < 0) {
                                      if (features[7] < 0) {
                                          return 4;
                                      } else {
                                          if (features[5] < 0) {
                                              if (features[6] < 0) {
                                                  return 4;
                                              } else {
                                                  return 4;
                                              }
                                          } else {
                                              return 4;
                                          }
                                      }
                                  } else {
                                      if (features[2] < 0) {
                                          return 4;
                                      } else {
                                          if (features[2] < 0) {
                                              return 8;
                                          } else {
                                              return 4;
                                          }
                                      }
                                  }
                              } else {
                                  return 8;
                              }
                          } else {
                              return 8;
                          }
                      } else {
                          if (features[4] < 0) {
                              return 8;
                          } else {
                              if (features[2] < 0) {
                                  return 8;
                              } else {
                                  return 4;
                              }
                          }
                      }
                  } else {
                      return 8;
                  }
              } else {
                  if (features[8] < 1) {
                      if (features[5] < 1) {
                          if (features[10] < 0) {
                              if (features[2] < 0) {
                                  return 4;
                              } else {
                                  if (features[7] < 0) {
                                      return 4;
                                  } else {
                                      if (features[2] < 0) {
                                          if (features[5] < 0) {
                                              if (features[1] < 0) {
                                                  return 4;
                                              } else {
                                                  return 8;
                                              }
                                          } else {
                                              return 0;
                                          }
                                      } else {
                                          return 0;
                                      }
                                  }
                              }
                          } else {
                              if (features[1] < 0) {
                                  return 4;
                              } else {
                                  return 3;
                              }
                          }
                      } else {
                          if (features[3] < 1) {
                              return 9;
                          } else {
                              return 2;
                          }
                      }
                  } else {
                      if (features[6] < 0) {
                          if (features[4] < 1) {
                              if (features[10] < 0) {
                                  if (features[8] < 2) {
                                      return 8;
                                  } else {
                                      return 4;
                                  }
                              } else {
                                  if (features[5] < 1) {
                                      return 3;
                                  } else {
                                      return 9;
                                  }
                              }
                          } else {
                              return 2;
                          }
                      } else {
                          if (features[10] < 0) {
                              return 9;
                          } else {
                              return 3;
                          }
                      }
                  }
              }
          }
        }
        

static inline int32_t ColorSenseFEModelRFC_EML_tree_9(const int16_t *features, int32_t features_length) {
          if (features[4] < 1) {
              if (features[6] < 0) {
                  if (features[4] < 0) {
                      if (features[0] < 0) {
                          if (features[2] < 0) {
                              if (features[1] < 0) {
                                  if (features[1] < 0) {
                                      if (features[0] < 0) {
                                          return 4;
                                      } else {
                                          return 0;
                                      }
                                  } else {
                                      if (features[6] < 0) {
                                          if (features[3] < 0) {
                                              if (features[5] < 0) {
                                                  return 4;
                                              } else {
                                                  return 4;
                                              }
                                          } else {
                                              if (features[6] < 0) {
                                                  return 4;
                                              } else {
                                                  return 8;
                                              }
                                          }
                                      } else {
                                          if (features[2] < 0) {
                                              return 4;
                                          } else {
                                              if (features[0] < 0) {
                                                  return 8;
                                              } else {
                                                  return 4;
                                              }
                                          }
                                      }
                                  }
                              } else {
                                  return 8;
                              }
                          } else {
                              return 8;
                          }
                      } else {
                          if (features[2] < 0) {
                              if (features[0] < 0) {
                                  return 8;
                              } else {
                                  if (features[7] < 0) {
                                      return 4;
                                  } else {
                                      if (features[7] < 0) {
                                          return 8;
                                      } else {
                                          return 4;
                                      }
                                  }
                              }
                          } else {
                              if (features[5] < 0) {
                                  return 4;
                              } else {
                                  return 8;
                              }
                          }
                      }
                  } else {
                      if (features[0] < 0) {
                          return 4;
                      } else {
                          if (features[2] < 0) {
                              if (features[1] < 0) {
                                  if (features[7] < 0) {
                                      return 4;
                                  } else {
                                      return 8;
                                  }
                              } else {
                                  return 8;
                              }
                          } else {
                              return 8;
                          }
                      }
                  }
              } else {
                  if (features[5] < 1) {
                      if (features[4] < 0) {
                          if (features[7] < 0) {
                              return 0;
                          } else {
                              return 1;
                          }
                      } else {
                          if (features[5] < 0) {
                              if (features[4] < 0) {
                                  if (features[7] < 0) {
                                      if (features[0] < 0) {
                                          return 8;
                                      } else {
                                          return 4;
                                      }
                                  } else {
                                      if (features[5] < 0) {
                                          if (features[1] < 0) {
                                              return 0;
                                          } else {
                                              if (features[7] < 0) {
                                                  return 4;
                                              } else {
                                                  return 0;
                                              }
                                          }
                                      } else {
                                          if (features[3] < 0) {
                                              if (features[7] < 0) {
                                                  return 8;
                                              } else {
                                                  return 0;
                                              }
                                          } else {
                                              return 0;
                                          }
                                      }
                                  }
                              } else {
                                  if (features[7] < 0) {
                                      return 6;
                                  } else {
                                      return 4;
                                  }
                              }
                          } else {
                              return 4;
                          }
                      }
                  } else {
                      if (features[4] < 1) {
                          return 3;
                      } else {
                          return 9;
                      }
                  }
              }
          } else {
              if (features[5] < 1) {
                  return 6;
              } else {
                  if (features[8] < 1) {
                      if (features[2] < 0) {
                          if (features[3] < 1) {
                              if (features[6] < 0) {
                                  if (features[1] < 0) {
                                      return 2;
                                  } else {
                                      return 9;
                                  }
                              } else {
                                  return 5;
                              }
                          } else {
                              return 7;
                          }
                      } else {
                          return 9;
                      }
                  } else {
                      if (features[6] < 0) {
                          if (features[2] < 0) {
                              return 2;
                          } else {
                              return 9;
                          }
                      } else {
                          if (features[6] < 0) {
                              return 9;
                          } else {
                              if (features[3] < 2) {
                                  return 5;
                              } else {
                                  if (features[3] < 2) {
                                      return 7;
                                  } else {
                                      return 5;
                                  }
                              }
                          }
                      }
                  }
              }
          }
        }
        

static inline int32_t ColorSenseFEModelRFC_EML_tree_10(const int16_t *features, int32_t features_length) {
          if (features[6] < 0) {
              if (features[3] < 0) {
                  if (features[5] < 1) {
                      if (features[8] < 1) {
                          if (features[8] < 1) {
                              if (features[8] < 1) {
                                  if (features[7] < 0) {
                                      return 8;
                                  } else {
                                      return 4;
                                  }
                              } else {
                                  return 4;
                              }
                          } else {
                              return 8;
                          }
                      } else {
                          if (features[4] < 0) {
                              return 8;
                          } else {
                              return 4;
                          }
                      }
                  } else {
                      if (features[2] < 0) {
                          return 8;
                      } else {
                          if (features[1] < 0) {
                              return 4;
                          } else {
                              return 8;
                          }
                      }
                  }
              } else {
                  if (features[11] < 0) {
                      return 8;
                  } else {
                      if (features[2] < 0) {
                          if (features[4] < 0) {
                              if (features[0] < 0) {
                                  return 8;
                              } else {
                                  return 4;
                              }
                          } else {
                              return 8;
                          }
                      } else {
                          if (features[3] < 0) {
                              if (features[7] < 0) {
                                  return 0;
                              } else {
                                  return 8;
                              }
                          } else {
                              return 4;
                          }
                      }
                  }
              }
          } else {
              if (features[5] < 0) {
                  if (features[6] < 0) {
                      if (features[5] < 0) {
                          if (features[7] < 0) {
                              if (features[1] < 0) {
                                  return 0;
                              } else {
                                  return 4;
                              }
                          } else {
                              return 0;
                          }
                      } else {
                          if (features[4] < 0) {
                              if (features[2] < 0) {
                                  return 0;
                              } else {
                                  if (features[7] < 0) {
                                      return 8;
                                  } else {
                                      return 0;
                                  }
                              }
                          } else {
                              return 4;
                          }
                      }
                  } else {
                      return 1;
                  }
              } else {
                  if (features[0] < 0) {
                      if (features[5] < 1) {
                          if (features[3] < 1) {
                              if (features[6] < 0) {
                                  if (features[7] < 0) {
                                      if (features[8] < 2) {
                                          return 8;
                                      } else {
                                          if (features[3] < 1) {
                                              return 2;
                                          } else {
                                              return 6;
                                          }
                                      }
                                  } else {
                                      return 4;
                                  }
                              } else {
                                  if (features[4] < 1) {
                                      return 3;
                                  } else {
                                      if (features[10] < 0) {
                                          return 2;
                                      } else {
                                          return 9;
                                      }
                                  }
                              }
                          } else {
                              if (features[1] < 0) {
                                  return 6;
                              } else {
                                  return 2;
                              }
                          }
                      } else {
                          if (features[3] < 1) {
                              if (features[7] < 0) {
                                  if (features[5] < 1) {
                                      return 2;
                                  } else {
                                      return 9;
                                  }
                              } else {
                                  return 9;
                              }
                          } else {
                              if (features[4] < 2) {
                                  return 2;
                              } else {
                                  if (features[4] < 2) {
                                      return 9;
                                  } else {
                                      return 5;
                                  }
                              }
                          }
                      }
                  } else {
                      if (features[8] < 1) {
                          if (features[1] < 0) {
                              return 7;
                          } else {
                              return 5;
                          }
                      } else {
                          if (features[1] < 0) {
                              return 7;
                          } else {
                              return 5;
                          }
                      }
                  }
              }
          }
        }
        

static inline int32_t ColorSenseFEModelRFC_EML_tree_11(const int16_t *features, int32_t features_length) {
          if (features[5] < 0) {
              if (features[6] < 0) {
                  if (features[8] < 2) {
                      return 0;
                  } else {
                      if (features[8] < 2) {
                          return 8;
                      } else {
                          return 0;
                      }
                  }
              } else {
                  if (features[3] < 0) {
                      return 0;
                  } else {
                      return 1;
                  }
              }
          } else {
              if (features[4] < 1) {
                  if (features[5] < 1) {
                      if (features[11] < 0) {
                          if (features[3] < 0) {
                              if (features[5] < 1) {
                                  return 4;
                              } else {
                                  if (features[8] < 1) {
                                      return 8;
                                  } else {
                                      return 4;
                                  }
                              }
                          } else {
                              if (features[2] < 0) {
                                  if (features[1] < 0) {
                                      if (features[7] < 0) {
                                          return 8;
                                      } else {
                                          return 8;
                                      }
                                  } else {
                                      return 8;
                                  }
                              } else {
                                  return 8;
                              }
                          }
                      } else {
                          if (features[4] < 0) {
                              if (features[8] < 1) {
                                  if (features[6] < 0) {
                                      if (features[4] < 0) {
                                          return 4;
                                      } else {
                                          if (features[4] < 0) {
                                              if (features[0] < 0) {
                                                  return 8;
                                              } else {
                                                  return 0;
                                              }
                                          } else {
                                              if (features[6] < 0) {
                                                  return 4;
                                              } else {
                                                  return 4;
                                              }
                                          }
                                      }
                                  } else {
                                      if (features[7] < 0) {
                                          return 8;
                                      } else {
                                          return 0;
                                      }
                                  }
                              } else {
                                  if (features[5] < 0) {
                                      if (features[4] < 0) {
                                          if (features[7] < 0) {
                                              return 4;
                                          } else {
                                              return 8;
                                          }
                                      } else {
                                          return 0;
                                      }
                                  } else {
                                      return 4;
                                  }
                              }
                          } else {
                              if (features[0] < 0) {
                                  if (features[0] < 0) {
                                      return 8;
                                  } else {
                                      if (features[8] < 1) {
                                          if (features[8] < 1) {
                                              return 4;
                                          } else {
                                              return 8;
                                          }
                                      } else {
                                          return 4;
                                      }
                                  }
                              } else {
                                  if (features[4] < 0) {
                                      return 4;
                                  } else {
                                      return 8;
                                  }
                              }
                          }
                      }
                  } else {
                      return 3;
                  }
              } else {
                  if (features[6] < 0) {
                      if (features[5] < 1) {
                          if (features[3] < 1) {
                              if (features[0] < 0) {
                                  return 3;
                              } else {
                                  if (features[2] < 0) {
                                      if (features[6] < 0) {
                                          return 9;
                                      } else {
                                          return 2;
                                      }
                                  } else {
                                      return 4;
                                  }
                              }
                          } else {
                              return 6;
                          }
                      } else {
                          if (features[3] < 1) {
                              if (features[3] < 0) {
                                  if (features[6] < 0) {
                                      return 3;
                                  } else {
                                      return 2;
                                  }
                              } else {
                                  if (features[1] < 0) {
                                      return 2;
                                  } else {
                                      return 9;
                                  }
                              }
                          } else {
                              if (features[1] < 0) {
                                  return 2;
                              } else {
                                  return 9;
                              }
                          }
                      }
                  } else {
                      if (features[1] < 0) {
                          return 7;
                      } else {
                          return 5;
                      }
                  }
              }
          }
        }
        

static inline int32_t ColorSenseFEModelRFC_EML_tree_12(const int16_t *features, int32_t features_length) {
          if (features[2] < 0) {
              if (features[5] < 1) {
                  if (features[1] < 0) {
                      return 6;
                  } else {
                      if (features[2] < 0) {
                          return 4;
                      } else {
                          if (features[7] < 0) {
                              if (features[0] < 0) {
                                  if (features[2] < 0) {
                                      return 8;
                                  } else {
                                      if (features[1] < 0) {
                                          if (features[5] < 0) {
                                              if (features[4] < 0) {
                                                  return 4;
                                              } else {
                                                  return 0;
                                              }
                                          } else {
                                              return 4;
                                          }
                                      } else {
                                          return 8;
                                      }
                                  }
                              } else {
                                  return 8;
                              }
                          } else {
                              if (features[2] < 0) {
                                  if (features[0] < 0) {
                                      if (features[2] < 0) {
                                          return 8;
                                      } else {
                                          return 4;
                                      }
                                  } else {
                                      if (features[4] < 1) {
                                          return 8;
                                      } else {
                                          if (features[2] < 0) {
                                              return 8;
                                          } else {
                                              return 4;
                                          }
                                      }
                                  }
                              } else {
                                  if (features[0] < 0) {
                                      if (features[0] < 0) {
                                          if (features[4] < 0) {
                                              if (features[4] < 0) {
                                                  return 4;
                                              } else {
                                                  return 8;
                                              }
                                          } else {
                                              return 4;
                                          }
                                      } else {
                                          if (features[7] < 0) {
                                              if (features[5] < 0) {
                                                  return 4;
                                              } else {
                                                  return 4;
                                              }
                                          } else {
                                              if (features[5] < 0) {
                                                  return 4;
                                              } else {
                                                  return 4;
                                              }
                                          }
                                      }
                                  } else {
                                      if (features[8] < 1) {
                                          if (features[2] < 0) {
                                              return 4;
                                          } else {
                                              return 8;
                                          }
                                      } else {
                                          if (features[3] < 0) {
                                              return 8;
                                          } else {
                                              return 4;
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              } else {
                  if (features[1] < 0) {
                      return 7;
                  } else {
                      if (features[4] < 2) {
                          if (features[0] < 0) {
                              return 3;
                          } else {
                              if (features[3] < 1) {
                                  if (features[7] < 0) {
                                      return 2;
                                  } else {
                                      return 9;
                                  }
                              } else {
                                  if (features[1] < 0) {
                                      return 2;
                                  } else {
                                      return 9;
                                  }
                              }
                          }
                      } else {
                          return 5;
                      }
                  }
              }
          } else {
              if (features[2] < 0) {
                  if (features[5] < 0) {
                      if (features[8] < 1) {
                          return 0;
                      } else {
                          if (features[2] < 0) {
                              return 4;
                          } else {
                              return 0;
                          }
                      }
                  } else {
                      if (features[2] < 0) {
                          return 0;
                      } else {
                          if (features[4] < 0) {
                              if (features[1] < 0) {
                                  if (features[0] < 0) {
                                      return 4;
                                  } else {
                                      if (features[7] < 0) {
                                          return 4;
                                      } else {
                                          return 0;
                                      }
                                  }
                              } else {
                                  return 3;
                              }
                          } else {
                              if (features[3] < 0) {
                                  return 8;
                              } else {
                                  return 4;
                              }
                          }
                      }
                  }
              } else {
                  return 1;
              }
          }
        }
        

static inline int32_t ColorSenseFEModelRFC_EML_tree_13(const int16_t *features, int32_t features_length) {
          if (features[8] < 1) {
              if (features[1] < 0) {
                  if (features[4] < 0) {
                      return 1;
                  } else {
                      if (features[5] < 0) {
                          return 0;
                      } else {
                          if (features[0] < 0) {
                              if (features[0] < 0) {
                                  if (features[3] < 0) {
                                      return 0;
                                  } else {
                                      return 4;
                                  }
                              } else {
                                  return 6;
                              }
                          } else {
                              return 7;
                          }
                      }
                  }
              } else {
                  if (features[0] < 0) {
                      if (features[3] < 0) {
                          if (features[1] < 0) {
                              return 0;
                          } else {
                              return 3;
                          }
                      } else {
                          if (features[0] < 0) {
                              if (features[6] < 0) {
                                  if (features[0] < 0) {
                                      return 8;
                                  } else {
                                      return 0;
                                  }
                              } else {
                                  return 0;
                              }
                          } else {
                              if (features[0] < 0) {
                                  return 4;
                              } else {
                                  if (features[5] < 0) {
                                      return 8;
                                  } else {
                                      return 4;
                                  }
                              }
                          }
                      }
                  } else {
                      if (features[2] < 0) {
                          if (features[7] < 0) {
                              return 9;
                          } else {
                              return 4;
                          }
                      } else {
                          if (features[0] < 0) {
                              if (features[1] < 0) {
                                  if (features[8] < 1) {
                                      if (features[7] < 0) {
                                          return 8;
                                      } else {
                                          return 4;
                                      }
                                  } else {
                                      if (features[1] < 0) {
                                          if (features[0] < 0) {
                                              if (features[2] < 0) {
                                                  return 8;
                                              } else {
                                                  return 4;
                                              }
                                          } else {
                                              if (features[7] < 0) {
                                                  return 4;
                                              } else {
                                                  return 4;
                                              }
                                          }
                                      } else {
                                          return 4;
                                      }
                                  }
                              } else {
                                  return 8;
                              }
                          } else {
                              if (features[11] < 0) {
                                  return 8;
                              } else {
                                  if (features[2] < 0) {
                                      return 8;
                                  } else {
                                      if (features[4] < 0) {
                                          return 8;
                                      } else {
                                          if (features[7] < 0) {
                                              return 4;
                                          } else {
                                              if (features[7] < 0) {
                                                  return 8;
                                              } else {
                                                  return 4;
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          } else {
              if (features[1] < 0) {
                  if (features[1] < 0) {
                      if (features[0] < 0) {
                          if (features[11] < 0) {
                              return 6;
                          } else {
                              return 1;
                          }
                      } else {
                          return 7;
                      }
                  } else {
                      if (features[5] < 1) {
                          if (features[0] < 0) {
                              if (features[4] < 0) {
                                  return 1;
                              } else {
                                  return 0;
                              }
                          } else {
                              return 6;
                          }
                      } else {
                          return 5;
                      }
                  }
              } else {
                  if (features[3] < 1) {
                      if (features[2] < 0) {
                          if (features[8] < 1) {
                              return 9;
                          } else {
                              return 2;
                          }
                      } else {
                          if (features[1] < 0) {
                              return 0;
                          } else {
                              if (features[3] < 0) {
                                  if (features[3] < 0) {
                                      return 0;
                                  } else {
                                      return 3;
                                  }
                              } else {
                                  if (features[5] < 1) {
                                      return 8;
                                  } else {
                                      return 2;
                                  }
                              }
                          }
                      }
                  } else {
                      if (features[6] < 0) {
                          return 2;
                      } else {
                          return 9;
                      }
                  }
              }
          }
        }
        

static inline int32_t ColorSenseFEModelRFC_EML_tree_14(const int16_t *features, int32_t features_length) {
          if (features[3] < 1) {
              if (features[5] < 0) {
                  if (features[2] < 0) {
                      if (features[7] < 0) {
                          if (features[6] < 0) {
                              return 8;
                          } else {
                              return 0;
                          }
                      } else {
                          return 0;
                      }
                  } else {
                      return 1;
                  }
              } else {
                  if (features[1] < 0) {
                      if (features[4] < 1) {
                          if (features[2] < 0) {
                              if (features[3] < 0) {
                                  if (features[0] < 0) {
                                      if (features[5] < 1) {
                                          return 4;
                                      } else {
                                          return 8;
                                      }
                                  } else {
                                      return 8;
                                  }
                              } else {
                                  if (features[3] < 1) {
                                      return 8;
                                  } else {
                                      return 6;
                                  }
                              }
                          } else {
                              if (features[4] < 0) {
                                  if (features[5] < 0) {
                                      if (features[3] < 0) {
                                          if (features[1] < 0) {
                                              return 8;
                                          } else {
                                              return 4;
                                          }
                                      } else {
                                          return 4;
                                      }
                                  } else {
                                      if (features[2] < 0) {
                                          return 0;
                                      } else {
                                          if (features[2] < 0) {
                                              return 8;
                                          } else {
                                              return 0;
                                          }
                                      }
                                  }
                              } else {
                                  if (features[0] < 0) {
                                      if (features[5] < 0) {
                                          if (features[1] < 0) {
                                              if (features[2] < 0) {
                                                  return 8;
                                              } else {
                                                  return 4;
                                              }
                                          } else {
                                              if (features[4] < 0) {
                                                  return 4;
                                              } else {
                                                  return 8;
                                              }
                                          }
                                      } else {
                                          return 4;
                                      }
                                  } else {
                                      if (features[3] < 0) {
                                          return 8;
                                      } else {
                                          if (features[1] < 0) {
                                              if (features[0] < 0) {
                                                  return 8;
                                              } else {
                                                  return 4;
                                              }
                                          } else {
                                              return 8;
                                          }
                                      }
                                  }
                              }
                          }
                      } else {
                          return 4;
                      }
                  } else {
                      if (features[3] < 0) {
                          return 3;
                      } else {
                          if (features[8] < 1) {
                              return 9;
                          } else {
                              if (features[10] < 0) {
                                  return 2;
                              } else {
                                  return 9;
                              }
                          }
                      }
                  }
              }
          } else {
              if (features[2] < 0) {
                  if (features[4] < 3) {
                      if (features[1] < 0) {
                          return 7;
                      } else {
                          if (features[3] < 1) {
                              return 9;
                          } else {
                              return 5;
                          }
                      }
                  } else {
                      return 5;
                  }
              } else {
                  if (features[7] < 0) {
                      if (features[6] < 0) {
                          if (features[1] < 0) {
                              return 6;
                          } else {
                              return 2;
                          }
                      } else {
                          return 6;
                      }
                  } else {
                      if (features[5] < 0) {
                          return 0;
                      } else {
                          return 6;
                      }
                  }
              }
          }
        }
        

static inline int32_t ColorSenseFEModelRFC_EML_tree_15(const int16_t *features, int32_t features_length) {
          if (features[2] < 0) {
              if (features[6] < 0) {
                  if (features[5] < 1) {
                      if (features[4] < 1) {
                          if (features[1] < 0) {
                              if (features[7] < 0) {
                                  return 2;
                              } else {
                                  return 4;
                              }
                          } else {
                              return 3;
                          }
                      } else {
                          if (features[3] < 1) {
                              return 2;
                          } else {
                              if (features[1] < 0) {
                                  return 6;
                              } else {
                                  return 2;
                              }
                          }
                      }
                  } else {
                      if (features[6] < 0) {
                          return 9;
                      } else {
                          if (features[5] < 1) {
                              if (features[5] < 1) {
                                  if (features[3] < 1) {
                                      return 9;
                                  } else {
                                      return 2;
                                  }
                              } else {
                                  return 2;
                              }
                          } else {
                              return 9;
                          }
                      }
                  }
              } else {
                  if (features[5] < 1) {
                      return 7;
                  } else {
                      return 5;
                  }
              }
          } else {
              if (features[1] < 0) {
                  if (features[4] < 0) {
                      return 1;
                  } else {
                      if (features[2] < 0) {
                          if (features[5] < 0) {
                              return 4;
                          } else {
                              if (features[2] < 0) {
                                  return 6;
                              } else {
                                  return 0;
                              }
                          }
                      } else {
                          return 0;
                      }
                  }
              } else {
                  if (features[4] < 0) {
                      if (features[6] < 0) {
                          if (features[0] < 0) {
                              if (features[5] < 1) {
                                  if (features[5] < 0) {
                                      if (features[0] < 0) {
                                          if (features[0] < 0) {
                                              return 4;
                                          } else {
                                              return 8;
                                          }
                                      } else {
                                          return 4;
                                      }
                                  } else {
                                      if (features[7] < 0) {
                                          return 4;
                                      } else {
                                          if (features[8] < 1) {
                                              if (features[3] < 0) {
                                                  return 4;
                                              } else {
                                                  return 4;
                                              }
                                          } else {
                                              return 8;
                                          }
                                      }
                                  }
                              } else {
                                  return 8;
                              }
                          } else {
                              if (features[3] < 0) {
                                  return 8;
                              } else {
                                  if (features[6] < 0) {
                                      if (features[8] < 1) {
                                          if (features[8] < 1) {
                                              return 4;
                                          } else {
                                              return 8;
                                          }
                                      } else {
                                          return 4;
                                      }
                                  } else {
                                      return 8;
                                  }
                              }
                          }
                      } else {
                          if (features[10] < 0) {
                              if (features[2] < 0) {
                                  if (features[0] < 0) {
                                      if (features[3] < 0) {
                                          if (features[8] < 1) {
                                              return 0;
                                          } else {
                                              if (features[3] < 0) {
                                                  return 4;
                                              } else {
                                                  return 8;
                                              }
                                          }
                                      } else {
                                          return 4;
                                      }
                                  } else {
                                      return 0;
                                  }
                              } else {
                                  if (features[0] < 0) {
                                      if (features[0] < 0) {
                                          return 0;
                                      } else {
                                          if (features[8] < 2) {
                                              return 0;
                                          } else {
                                              return 8;
                                          }
                                      }
                                  } else {
                                      if (features[7] < 0) {
                                          if (features[8] < 2) {
                                              return 4;
                                          } else {
                                              return 8;
                                          }
                                      } else {
                                          return 0;
                                      }
                                  }
                              }
                          } else {
                              return 3;
                          }
                      }
                  } else {
                      return 8;
                  }
              }
          }
        }
        

static inline int32_t ColorSenseFEModelRFC_EML_tree_16(const int16_t *features, int32_t features_length) {
          if (features[1] < 0) {
              if (features[9] < 0) {
                  if (features[0] < 0) {
                      return 1;
                  } else {
                      if (features[1] < 0) {
                          return 0;
                      } else {
                          if (features[6] < 0) {
                              if (features[3] < 0) {
                                  return 0;
                              } else {
                                  return 4;
                              }
                          } else {
                              return 0;
                          }
                      }
                  }
              } else {
                  if (features[0] < 0) {
                      if (features[4] < 2) {
                          return 6;
                      } else {
                          return 5;
                      }
                  } else {
                      if (features[3] < 2) {
                          if (features[5] < 1) {
                              return 7;
                          } else {
                              return 5;
                          }
                      } else {
                          if (features[4] < 3) {
                              return 7;
                          } else {
                              return 5;
                          }
                      }
                  }
              }
          } else {
              if (features[6] < 0) {
                  if (features[2] < 0) {
                      if (features[10] < 0) {
                          return 8;
                      } else {
                          if (features[6] < 0) {
                              if (features[0] < 0) {
                                  return 4;
                              } else {
                                  return 8;
                              }
                          } else {
                              if (features[0] < 0) {
                                  return 4;
                              } else {
                                  return 8;
                              }
                          }
                      }
                  } else {
                      if (features[6] < 0) {
                          return 8;
                      } else {
                          if (features[7] < 0) {
                              if (features[1] < 0) {
                                  if (features[3] < 0) {
                                      if (features[3] < 0) {
                                          return 4;
                                      } else {
                                          return 8;
                                      }
                                  } else {
                                      return 4;
                                  }
                              } else {
                                  return 4;
                              }
                          } else {
                              if (features[6] < 0) {
                                  if (features[8] < 1) {
                                      return 4;
                                  } else {
                                      return 8;
                                  }
                              } else {
                                  if (features[0] < 0) {
                                      return 8;
                                  } else {
                                      return 4;
                                  }
                              }
                          }
                      }
                  }
              } else {
                  if (features[7] < 0) {
                      if (features[4] < 1) {
                          if (features[0] < 0) {
                              if (features[5] < 1) {
                                  if (features[2] < 0) {
                                      if (features[1] < 0) {
                                          return 8;
                                      } else {
                                          return 3;
                                      }
                                  } else {
                                      return 4;
                                  }
                              } else {
                                  return 9;
                              }
                          } else {
                              return 2;
                          }
                      } else {
                          return 9;
                      }
                  } else {
                      if (features[3] < 0) {
                          if (features[5] < 1) {
                              return 0;
                          } else {
                              return 3;
                          }
                      } else {
                          if (features[1] < 0) {
                              if (features[2] < 0) {
                                  if (features[8] < 1) {
                                      return 4;
                                  } else {
                                      return 2;
                                  }
                              } else {
                                  if (features[7] < 0) {
                                      return 4;
                                  } else {
                                      if (features[4] < 0) {
                                          return 0;
                                      } else {
                                          if (features[8] < 1) {
                                              return 4;
                                          } else {
                                              if (features[8] < 1) {
                                                  return 0;
                                              } else {
                                                  return 0;
                                              }
                                          }
                                      }
                                  }
                              }
                          } else {
                              return 9;
                          }
                      }
                  }
              }
          }
        }
        

static inline int32_t ColorSenseFEModelRFC_EML_tree_17(const int16_t *features, int32_t features_length) {
          if (features[6] < 0) {
              if (features[4] < 0) {
                  if (features[0] < 0) {
                      if (features[4] < 0) {
                          return 8;
                      } else {
                          if (features[7] < 0) {
                              if (features[2] < 0) {
                                  if (features[6] < 0) {
                                      return 4;
                                  } else {
                                      if (features[6] < 0) {
                                          return 8;
                                      } else {
                                          return 4;
                                      }
                                  }
                              } else {
                                  if (features[5] < 0) {
                                      return 4;
                                  } else {
                                      return 0;
                                  }
                              }
                          } else {
                              if (features[0] < 0) {
                                  return 4;
                              } else {
                                  if (features[5] < 0) {
                                      if (features[5] < 0) {
                                          return 4;
                                      } else {
                                          return 8;
                                      }
                                  } else {
                                      return 4;
                                  }
                              }
                          }
                      }
                  } else {
                      if (features[4] < 0) {
                          if (features[0] < 0) {
                              return 8;
                          } else {
                              return 4;
                          }
                      } else {
                          if (features[3] < 1) {
                              if (features[8] < 1) {
                                  return 4;
                              } else {
                                  return 8;
                              }
                          } else {
                              return 4;
                          }
                      }
                  }
              } else {
                  if (features[7] < 0) {
                      return 4;
                  } else {
                      if (features[0] < 0) {
                          return 8;
                      } else {
                          if (features[4] < 1) {
                              return 4;
                          } else {
                              return 8;
                          }
                      }
                  }
              }
          } else {
              if (features[11] < 0) {
                  if (features[6] < 0) {
                      if (features[5] < 1) {
                          if (features[1] < 0) {
                              return 6;
                          } else {
                              if (features[10] < 0) {
                                  if (features[7] < 0) {
                                      return 2;
                                  } else {
                                      return 4;
                                  }
                              } else {
                                  if (features[6] < 0) {
                                      return 4;
                                  } else {
                                      if (features[3] < 0) {
                                          return 3;
                                      } else {
                                          return 9;
                                      }
                                  }
                              }
                          }
                      } else {
                          if (features[4] < 1) {
                              return 9;
                          } else {
                              if (features[8] < 1) {
                                  if (features[5] < 1) {
                                      return 2;
                                  } else {
                                      return 9;
                                  }
                              } else {
                                  if (features[5] < 1) {
                                      return 2;
                                  } else {
                                      return 9;
                                  }
                              }
                          }
                      }
                  } else {
                      if (features[1] < 0) {
                          return 7;
                      } else {
                          return 5;
                      }
                  }
              } else {
                  if (features[0] < 0) {
                      if (features[0] < 0) {
                          return 0;
                      } else {
                          return 1;
                      }
                  } else {
                      if (features[1] < 0) {
                          if (features[4] < 0) {
                              return 0;
                          } else {
                              return 4;
                          }
                      } else {
                          if (features[0] < 0) {
                              if (features[5] < 0) {
                                  if (features[8] < 1) {
                                      if (features[1] < 0) {
                                          return 4;
                                      } else {
                                          if (features[5] < 0) {
                                              return 0;
                                          } else {
                                              if (features[3] < 0) {
                                                  return 0;
                                              } else {
                                                  return 0;
                                              }
                                          }
                                      }
                                  } else {
                                      return 4;
                                  }
                              } else {
                                  return 8;
                              }
                          } else {
                              return 4;
                          }
                      }
                  }
              }
          }
        }
        

static inline int32_t ColorSenseFEModelRFC_EML_tree_18(const int16_t *features, int32_t features_length) {
          if (features[2] < 0) {
              if (features[1] < 0) {
                  if (features[0] < 0) {
                      if (features[4] < 2) {
                          return 6;
                      } else {
                          return 5;
                      }
                  } else {
                      if (features[5] < 1) {
                          return 7;
                      } else {
                          return 5;
                      }
                  }
              } else {
                  if (features[4] < 1) {
                      return 3;
                  } else {
                      if (features[8] < 1) {
                          if (features[1] < 0) {
                              if (features[6] < 0) {
                                  return 4;
                              } else {
                                  return 2;
                              }
                          } else {
                              return 9;
                          }
                      } else {
                          if (features[1] < 0) {
                              return 2;
                          } else {
                              return 9;
                          }
                      }
                  }
              }
          } else {
              if (features[5] < 0) {
                  if (features[2] < 0) {
                      if (features[2] < 0) {
                          if (features[2] < 0) {
                              if (features[4] < 0) {
                                  if (features[2] < 0) {
                                      return 4;
                                  } else {
                                      return 8;
                                  }
                              } else {
                                  return 8;
                              }
                          } else {
                              if (features[6] < 0) {
                                  return 8;
                              } else {
                                  if (features[5] < 0) {
                                      if (features[0] < 0) {
                                          return 4;
                                      } else {
                                          if (features[7] < 0) {
                                              return 0;
                                          } else {
                                              return 4;
                                          }
                                      }
                                  } else {
                                      if (features[8] < 1) {
                                          if (features[3] < 0) {
                                              if (features[5] < 0) {
                                                  return 4;
                                              } else {
                                                  return 8;
                                              }
                                          } else {
                                              return 4;
                                          }
                                      } else {
                                          if (features[7] < 0) {
                                              return 4;
                                          } else {
                                              if (features[7] < 0) {
                                                  return 8;
                                              } else {
                                                  return 4;
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                      } else {
                          if (features[8] < 2) {
                              if (features[7] < 0) {
                                  if (features[2] < 0) {
                                      return 4;
                                  } else {
                                      return 0;
                                  }
                              } else {
                                  if (features[2] < 0) {
                                      if (features[2] < 0) {
                                          return 0;
                                      } else {
                                          return 4;
                                      }
                                  } else {
                                      if (features[1] < 0) {
                                          return 0;
                                      } else {
                                          if (features[5] < 0) {
                                              return 0;
                                          } else {
                                              if (features[8] < 1) {
                                                  return 0;
                                              } else {
                                                  return 0;
                                              }
                                          }
                                      }
                                  }
                              }
                          } else {
                              if (features[2] < 0) {
                                  if (features[2] < 0) {
                                      return 8;
                                  } else {
                                      if (features[6] < 0) {
                                          return 4;
                                      } else {
                                          return 8;
                                      }
                                  }
                              } else {
                                  return 0;
                              }
                          }
                      }
                  } else {
                      return 1;
                  }
              } else {
                  if (features[3] < 0) {
                      if (features[1] < 0) {
                          if (features[7] < 0) {
                              if (features[7] < 0) {
                                  return 4;
                              } else {
                                  return 8;
                              }
                          } else {
                              if (features[7] < 0) {
                                  if (features[5] < 1) {
                                      return 4;
                                  } else {
                                      return 8;
                                  }
                              } else {
                                  return 4;
                              }
                          }
                      } else {
                          return 3;
                      }
                  } else {
                      if (features[2] < 0) {
                          if (features[3] < 1) {
                              return 8;
                          } else {
                              if (features[3] < 1) {
                                  if (features[8] < 1) {
                                      return 8;
                                  } else {
                                      return 4;
                                  }
                              } else {
                                  return 8;
                              }
                          }
                      } else {
                          return 8;
                      }
                  }
              }
          }
        }
        

static inline int32_t ColorSenseFEModelRFC_EML_tree_19(const int16_t *features, int32_t features_length) {
          if (features[6] < 0) {
              if (features[5] < 0) {
                  if (features[4] < 0) {
                      if (features[6] < 0) {
                          if (features[3] < 0) {
                              return 8;
                          } else {
                              if (features[4] < 0) {
                                  return 8;
                              } else {
                                  if (features[7] < 0) {
                                      return 4;
                                  } else {
                                      if (features[8] < 1) {
                                          return 4;
                                      } else {
                                          return 8;
                                      }
                                  }
                              }
                          }
                      } else {
                          if (features[7] < 0) {
                              if (features[7] < 0) {
                                  if (features[3] < 0) {
                                      return 4;
                                  } else {
                                      if (features[7] < 0) {
                                          return 4;
                                      } else {
                                          return 0;
                                      }
                                  }
                              } else {
                                  return 4;
                              }
                          } else {
                              if (features[8] < 1) {
                                  if (features[8] < 1) {
                                      if (features[4] < 0) {
                                          if (features[5] < 0) {
                                              return 4;
                                          } else {
                                              return 8;
                                          }
                                      } else {
                                          return 4;
                                      }
                                  } else {
                                      if (features[2] < 0) {
                                          if (features[1] < 0) {
                                              return 8;
                                          } else {
                                              return 4;
                                          }
                                      } else {
                                          return 4;
                                      }
                                  }
                              } else {
                                  if (features[1] < 0) {
                                      return 4;
                                  } else {
                                      return 8;
                                  }
                              }
                          }
                      }
                  } else {
                      return 8;
                  }
              } else {
                  if (features[4] < 0) {
                      if (features[8] < 1) {
                          if (features[1] < 0) {
                              return 8;
                          } else {
                              return 4;
                          }
                      } else {
                          return 8;
                      }
                  } else {
                      if (features[8] < 1) {
                          if (features[3] < 1) {
                              return 8;
                          } else {
                              if (features[8] < 1) {
                                  return 8;
                              } else {
                                  return 4;
                              }
                          }
                      } else {
                          return 4;
                      }
                  }
              }
          } else {
              if (features[11] < 0) {
                  if (features[4] < 2) {
                      if (features[4] < 1) {
                          if (features[10] < 0) {
                              if (features[8] < 2) {
                                  return 4;
                              } else {
                                  return 6;
                              }
                          } else {
                              return 3;
                          }
                      } else {
                          if (features[6] < 0) {
                              return 4;
                          } else {
                              if (features[7] < 0) {
                                  if (features[6] < 0) {
                                      if (features[2] < 0) {
                                          return 2;
                                      } else {
                                          if (features[1] < 0) {
                                              return 6;
                                          } else {
                                              return 9;
                                          }
                                      }
                                  } else {
                                      if (features[4] < 2) {
                                          return 6;
                                      } else {
                                          return 9;
                                      }
                                  }
                              } else {
                                  if (features[7] < 0) {
                                      if (features[1] < 0) {
                                          if (features[5] < 1) {
                                              return 6;
                                          } else {
                                              return 2;
                                          }
                                      } else {
                                          return 9;
                                      }
                                  } else {
                                      if (features[1] < 0) {
                                          return 6;
                                      } else {
                                          return 9;
                                      }
                                  }
                              }
                          }
                      }
                  } else {
                      if (features[8] < 1) {
                          return 7;
                      } else {
                          if (features[5] < 1) {
                              return 7;
                          } else {
                              return 5;
                          }
                      }
                  }
              } else {
                  if (features[6] < 0) {
                      if (features[3] < 0) {
                          if (features[4] < 0) {
                              if (features[2] < 0) {
                                  if (features[2] < 0) {
                                      return 0;
                                  } else {
                                      if (features[6] < 0) {
                                          if (features[2] < 0) {
                                              return 8;
                                          } else {
                                              if (features[8] < 1) {
                                                  return 4;
                                              } else {
                                                  return 8;
                                              }
                                          }
                                      } else {
                                          return 0;
                                      }
                                  }
                              } else {
                                  if (features[1] < 0) {
                                      return 0;
                                  } else {
                                      if (features[1] < 0) {
                                          return 8;
                                      } else {
                                          return 0;
                                      }
                                  }
                              }
                          } else {
                              return 4;
                          }
                      } else {
                          return 0;
                      }
                  } else {
                      if (features[1] < 0) {
                          return 1;
                      } else {
                          return 0;
                      }
                  }
              }
          }
        }
        

int32_t ColorSenseFEModelRFC_EML_predict(const int16_t *features, int32_t features_length) {

        int32_t votes[10] = {0,};
        int32_t _class = -1;

        _class = ColorSenseFEModelRFC_EML_tree_0(features, features_length); votes[_class] += 1;
    _class = ColorSenseFEModelRFC_EML_tree_1(features, features_length); votes[_class] += 1;
    _class = ColorSenseFEModelRFC_EML_tree_2(features, features_length); votes[_class] += 1;
    _class = ColorSenseFEModelRFC_EML_tree_3(features, features_length); votes[_class] += 1;
    _class = ColorSenseFEModelRFC_EML_tree_4(features, features_length); votes[_class] += 1;
    _class = ColorSenseFEModelRFC_EML_tree_5(features, features_length); votes[_class] += 1;
    _class = ColorSenseFEModelRFC_EML_tree_6(features, features_length); votes[_class] += 1;
    _class = ColorSenseFEModelRFC_EML_tree_7(features, features_length); votes[_class] += 1;
    _class = ColorSenseFEModelRFC_EML_tree_8(features, features_length); votes[_class] += 1;
    _class = ColorSenseFEModelRFC_EML_tree_9(features, features_length); votes[_class] += 1;
    _class = ColorSenseFEModelRFC_EML_tree_10(features, features_length); votes[_class] += 1;
    _class = ColorSenseFEModelRFC_EML_tree_11(features, features_length); votes[_class] += 1;
    _class = ColorSenseFEModelRFC_EML_tree_12(features, features_length); votes[_class] += 1;
    _class = ColorSenseFEModelRFC_EML_tree_13(features, features_length); votes[_class] += 1;
    _class = ColorSenseFEModelRFC_EML_tree_14(features, features_length); votes[_class] += 1;
    _class = ColorSenseFEModelRFC_EML_tree_15(features, features_length); votes[_class] += 1;
    _class = ColorSenseFEModelRFC_EML_tree_16(features, features_length); votes[_class] += 1;
    _class = ColorSenseFEModelRFC_EML_tree_17(features, features_length); votes[_class] += 1;
    _class = ColorSenseFEModelRFC_EML_tree_18(features, features_length); votes[_class] += 1;
    _class = ColorSenseFEModelRFC_EML_tree_19(features, features_length); votes[_class] += 1;
    
        int32_t most_voted_class = -1;
        int32_t most_voted_votes = 0;
        for (int32_t i=0; i<10; i++) {

            if (votes[i] > most_voted_votes) {
                most_voted_class = i;
                most_voted_votes = votes[i];
            }
        }
        return most_voted_class;
    }
    

int ColorSenseFEModelRFC_EML_predict_proba(const int16_t *features, int32_t features_length, float *out, int out_length) {

        int32_t _class = -1;

        for (int i=0; i<out_length; i++) {
            out[i] = 0.0f;
        }

        _class = ColorSenseFEModelRFC_EML_tree_0(features, features_length); out[_class] += 1.0f;
    _class = ColorSenseFEModelRFC_EML_tree_1(features, features_length); out[_class] += 1.0f;
    _class = ColorSenseFEModelRFC_EML_tree_2(features, features_length); out[_class] += 1.0f;
    _class = ColorSenseFEModelRFC_EML_tree_3(features, features_length); out[_class] += 1.0f;
    _class = ColorSenseFEModelRFC_EML_tree_4(features, features_length); out[_class] += 1.0f;
    _class = ColorSenseFEModelRFC_EML_tree_5(features, features_length); out[_class] += 1.0f;
    _class = ColorSenseFEModelRFC_EML_tree_6(features, features_length); out[_class] += 1.0f;
    _class = ColorSenseFEModelRFC_EML_tree_7(features, features_length); out[_class] += 1.0f;
    _class = ColorSenseFEModelRFC_EML_tree_8(features, features_length); out[_class] += 1.0f;
    _class = ColorSenseFEModelRFC_EML_tree_9(features, features_length); out[_class] += 1.0f;
    _class = ColorSenseFEModelRFC_EML_tree_10(features, features_length); out[_class] += 1.0f;
    _class = ColorSenseFEModelRFC_EML_tree_11(features, features_length); out[_class] += 1.0f;
    _class = ColorSenseFEModelRFC_EML_tree_12(features, features_length); out[_class] += 1.0f;
    _class = ColorSenseFEModelRFC_EML_tree_13(features, features_length); out[_class] += 1.0f;
    _class = ColorSenseFEModelRFC_EML_tree_14(features, features_length); out[_class] += 1.0f;
    _class = ColorSenseFEModelRFC_EML_tree_15(features, features_length); out[_class] += 1.0f;
    _class = ColorSenseFEModelRFC_EML_tree_16(features, features_length); out[_class] += 1.0f;
    _class = ColorSenseFEModelRFC_EML_tree_17(features, features_length); out[_class] += 1.0f;
    _class = ColorSenseFEModelRFC_EML_tree_18(features, features_length); out[_class] += 1.0f;
    _class = ColorSenseFEModelRFC_EML_tree_19(features, features_length); out[_class] += 1.0f;
    
        // compute mean
        for (int i=0; i<out_length; i++) {
            out[i] = out[i] / 20;
        }
        return 0;
    }
    

// Class names — update if you change labels!
const char* ColorSenseFEModelRFC_EML_class_names[] = {
    "black",
    "blue",
    "brown",
    "green",
    "grey",
    "orange",
    "pink",
    "red",
    "white",
    "yellow",
};
