#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class DecisionTreeRegressor {
                public:
                    /**
                    * Predict class for features vector
                    */
                    float predict(float *x) {
                        if (x[1] <= 130.5) {
                            if (x[1] <= 39.0) {
                                if (x[2] <= 20.5) {
                                    return 0.0f;
                                }

                                else {
                                    if (x[4] <= 98.5) {
                                        if (x[1] <= 31.5) {
                                            return 2.0f;
                                        }

                                        else {
                                            return 4.0f;
                                        }
                                    }

                                    else {
                                        return 1.0f;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 122.5) {
                                    if (x[4] <= 106.0) {
                                        if (x[4] <= 32.0) {
                                            if (x[2] <= 64.0) {
                                                return 4.0f;
                                            }

                                            else {
                                                if (x[1] <= 103.0) {
                                                    return 5.0f;
                                                }

                                                else {
                                                    return 6.0f;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 71.0) {
                                                return 2.0f;
                                            }

                                            else {
                                                return 3.0f;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 103.0) {
                                            if (x[1] <= 108.5) {
                                                if (x[3] <= 105.0) {
                                                    if (x[2] <= 98.5) {
                                                        return 4.0f;
                                                    }

                                                    else {
                                                        if (x[3] <= 82.5) {
                                                            return 3.0f;
                                                        }

                                                        else {
                                                            return 4.0f;
                                                        }
                                                    }
                                                }

                                                else {
                                                    return 1.0f;
                                                }
                                            }

                                            else {
                                                return 7.0f;
                                            }
                                        }

                                        else {
                                            return 3.0f;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 81.0) {
                                        return 1.0f;
                                    }

                                    else {
                                        return 8.0f;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 267.5) {
                                if (x[1] <= 172.5) {
                                    if (x[2] <= 70.5) {
                                        return 7.0f;
                                    }

                                    else {
                                        if (x[1] <= 134.0) {
                                            return 3.0f;
                                        }

                                        else {
                                            if (x[3] <= 67.0) {
                                                return 5.0f;
                                            }

                                            else {
                                                if (x[2] <= 140.0) {
                                                    return 6.0f;
                                                }

                                                else {
                                                    if (x[3] <= 140.0) {
                                                        return 9.0f;
                                                    }

                                                    else {
                                                        return 8.0f;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 152.5) {
                                        if (x[3] <= 96.0) {
                                            return 5.0f;
                                        }

                                        else {
                                            return 6.0f;
                                        }
                                    }

                                    else {
                                        return 9.0f;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 150.0) {
                                    return 9.0f;
                                }

                                else {
                                    return 8.0f;
                                }
                            }
                        }
                    }

                    /**
                    * Predict readable class name
                    */
                    const char* predictLabel(float *x) {
                        return idxToLabel(predict(x));
                    }

                    /**
                    * Convert class idx to readable name
                    */
                    const char* idxToLabel(uint8_t classIdx) {
                        switch (classIdx) {
                            case 0:
                            return "black";
                            case 1:
                            return "blue";
                            case 2:
                            return "brown";
                            case 3:
                            return "green";
                            case 4:
                            return "grey";
                            case 5:
                            return "orange";
                            case 6:
                            return "pink";
                            case 7:
                            return "red";
                            case 8:
                            return "white";
                            case 9:
                            return "yellow";
                            default:
                            return "Houston we have a problem";
                        }
                    }

                protected:
                };
            }
        }
    }