#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class RandomForestRegressor {
                public:
                    /**
                    * Predict class for features vector
                    */
                    float predict(float *x) {
                        float y_pred = 0;
                        // tree #1
                        if (x[1] <= 130.5) {
                            if (x[1] <= 39.0) {
                                if (x[2] <= 20.5) {
                                    y_pred += 0.0;
                                }

                                else {
                                    y_pred += 1.0;
                                }
                            }

                            else {
                                if (x[3] <= 122.5) {
                                    if (x[4] <= 106.0) {
                                        if (x[4] <= 17.0) {
                                            y_pred += 5.0;
                                        }

                                        else {
                                            if (x[4] <= 49.0) {
                                                y_pred += 3.0;
                                            }

                                            else {
                                                y_pred += 2.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 104.0) {
                                            if (x[1] <= 108.5) {
                                                if (x[3] <= 105.0) {
                                                    if (x[2] <= 98.5) {
                                                        y_pred += 4.0;
                                                    }

                                                    else {
                                                        if (x[1] <= 79.0) {
                                                            y_pred += 3.0;
                                                        }

                                                        else {
                                                            y_pred += 4.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    y_pred += 1.0;
                                                }
                                            }

                                            else {
                                                y_pred += 7.0;
                                            }
                                        }

                                        else {
                                            y_pred += 3.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 106.5) {
                                        y_pred += 1.0;
                                    }

                                    else {
                                        y_pred += 8.0;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 267.5) {
                                if (x[1] <= 172.5) {
                                    if (x[2] <= 72.5) {
                                        y_pred += 7.0;
                                    }

                                    else {
                                        if (x[1] <= 134.0) {
                                            y_pred += 3.0;
                                        }

                                        else {
                                            if (x[3] <= 68.0) {
                                                y_pred += 5.0;
                                            }

                                            else {
                                                if (x[2] <= 140.0) {
                                                    y_pred += 6.0;
                                                }

                                                else {
                                                    if (x[0] <= 219.5) {
                                                        y_pred += 9.0;
                                                    }

                                                    else {
                                                        y_pred += 8.0;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 152.0) {
                                        if (x[4] <= 250.0) {
                                            y_pred += 5.0;
                                        }

                                        else {
                                            y_pred += 6.0;
                                        }
                                    }

                                    else {
                                        y_pred += 9.0;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 150.0) {
                                    y_pred += 9.0;
                                }

                                else {
                                    y_pred += 8.0;
                                }
                            }
                        }

                        // tree #2
                        if (x[1] <= 130.5) {
                            if (x[1] <= 39.0) {
                                if (x[2] <= 20.5) {
                                    y_pred += 0.0;
                                }

                                else {
                                    if (x[4] <= 102.0) {
                                        y_pred += 4.0;
                                    }

                                    else {
                                        y_pred += 1.0;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 122.0) {
                                    if (x[4] <= 106.5) {
                                        if (x[2] <= 61.0) {
                                            y_pred += 2.0;
                                        }

                                        else {
                                            if (x[4] <= 32.0) {
                                                y_pred += 4.0;
                                            }

                                            else {
                                                y_pred += 3.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 104.0) {
                                            if (x[3] <= 47.0) {
                                                y_pred += 7.0;
                                            }

                                            else {
                                                if (x[2] <= 98.5) {
                                                    y_pred += 4.0;
                                                }

                                                else {
                                                    if (x[3] <= 82.5) {
                                                        y_pred += 3.0;
                                                    }

                                                    else {
                                                        y_pred += 4.0;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 3.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 106.5) {
                                        y_pred += 1.0;
                                    }

                                    else {
                                        y_pred += 8.0;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 267.5) {
                                if (x[1] <= 172.5) {
                                    if (x[2] <= 70.5) {
                                        y_pred += 7.0;
                                    }

                                    else {
                                        if (x[1] <= 134.0) {
                                            y_pred += 3.0;
                                        }

                                        else {
                                            if (x[3] <= 67.0) {
                                                y_pred += 5.0;
                                            }

                                            else {
                                                if (x[2] <= 140.0) {
                                                    y_pred += 6.0;
                                                }

                                                else {
                                                    if (x[0] <= 219.5) {
                                                        y_pred += 9.0;
                                                    }

                                                    else {
                                                        y_pred += 8.0;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 152.0) {
                                        if (x[2] <= 119.5) {
                                            y_pred += 5.0;
                                        }

                                        else {
                                            y_pred += 6.0;
                                        }
                                    }

                                    else {
                                        y_pred += 9.0;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 149.5) {
                                    y_pred += 9.0;
                                }

                                else {
                                    y_pred += 8.0;
                                }
                            }
                        }

                        // tree #3
                        if (x[1] <= 130.5) {
                            if (x[1] <= 39.0) {
                                if (x[2] <= 25.0) {
                                    y_pred += 0.0;
                                }

                                else {
                                    if (x[3] <= 53.0) {
                                        if (x[2] <= 34.5) {
                                            y_pred += 2.0;
                                        }

                                        else {
                                            y_pred += 4.0;
                                        }
                                    }

                                    else {
                                        y_pred += 1.0;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 122.0) {
                                    if (x[4] <= 106.0) {
                                        if (x[3] <= 55.0) {
                                            y_pred += 2.0;
                                        }

                                        else {
                                            y_pred += 4.0;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 104.5) {
                                            if (x[3] <= 47.0) {
                                                y_pred += 7.0;
                                            }

                                            else {
                                                if (x[2] <= 98.5) {
                                                    y_pred += 4.0;
                                                }

                                                else {
                                                    if (x[1] <= 79.0) {
                                                        y_pred += 3.0;
                                                    }

                                                    else {
                                                        y_pred += 4.0;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 3.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[4] <= 187.5) {
                                        y_pred += 8.0;
                                    }

                                    else {
                                        y_pred += 1.0;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 267.0) {
                                if (x[1] <= 172.5) {
                                    if (x[2] <= 70.5) {
                                        y_pred += 7.0;
                                    }

                                    else {
                                        if (x[1] <= 134.0) {
                                            y_pred += 3.0;
                                        }

                                        else {
                                            if (x[3] <= 67.0) {
                                                y_pred += 5.0;
                                            }

                                            else {
                                                if (x[2] <= 138.5) {
                                                    y_pred += 6.0;
                                                }

                                                else {
                                                    if (x[0] <= 220.0) {
                                                        y_pred += 9.0;
                                                    }

                                                    else {
                                                        y_pred += 8.0;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 152.0) {
                                        if (x[3] <= 96.0) {
                                            y_pred += 5.0;
                                        }

                                        else {
                                            y_pred += 6.0;
                                        }
                                    }

                                    else {
                                        y_pred += 9.0;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 149.5) {
                                    y_pred += 9.0;
                                }

                                else {
                                    y_pred += 8.0;
                                }
                            }
                        }

                        // tree #4
                        if (x[1] <= 130.5) {
                            if (x[1] <= 39.0) {
                                if (x[1] <= 23.5) {
                                    y_pred += 0.0;
                                }

                                else {
                                    if (x[3] <= 43.0) {
                                        y_pred += 2.0;
                                    }

                                    else {
                                        y_pred += 1.0;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 122.0) {
                                    if (x[3] <= 42.5) {
                                        if (x[4] <= 120.0) {
                                            y_pred += 2.0;
                                        }

                                        else {
                                            y_pred += 7.0;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 103.0) {
                                            if (x[1] <= 105.5) {
                                                if (x[4] <= 227.0) {
                                                    y_pred += 4.0;
                                                }

                                                else {
                                                    y_pred += 1.0;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 105.0) {
                                                    y_pred += 6.0;
                                                }

                                                else {
                                                    y_pred += 7.0;
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 3.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 168.0) {
                                        y_pred += 8.0;
                                    }

                                    else {
                                        y_pred += 1.0;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 270.0) {
                                if (x[1] <= 172.5) {
                                    if (x[2] <= 70.5) {
                                        y_pred += 7.0;
                                    }

                                    else {
                                        if (x[1] <= 135.5) {
                                            y_pred += 3.0;
                                        }

                                        else {
                                            if (x[3] <= 67.0) {
                                                y_pred += 5.0;
                                            }

                                            else {
                                                if (x[2] <= 140.0) {
                                                    y_pred += 6.0;
                                                }

                                                else {
                                                    if (x[0] <= 219.5) {
                                                        y_pred += 9.0;
                                                    }

                                                    else {
                                                        y_pred += 8.0;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 152.5) {
                                        if (x[0] <= 214.0) {
                                            y_pred += 5.0;
                                        }

                                        else {
                                            y_pred += 6.0;
                                        }
                                    }

                                    else {
                                        y_pred += 9.0;
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 349.5) {
                                    y_pred += 9.0;
                                }

                                else {
                                    y_pred += 8.0;
                                }
                            }
                        }

                        // tree #5
                        if (x[1] <= 130.5) {
                            if (x[1] <= 40.5) {
                                if (x[2] <= 20.5) {
                                    y_pred += 0.0;
                                }

                                else {
                                    y_pred += 1.0;
                                }
                            }

                            else {
                                if (x[3] <= 122.0) {
                                    if (x[4] <= 106.0) {
                                        if (x[4] <= 32.0) {
                                            if (x[0] <= 75.5) {
                                                y_pred += 4.0;
                                            }

                                            else {
                                                y_pred += 6.0;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 70.5) {
                                                y_pred += 2.0;
                                            }

                                            else {
                                                y_pred += 3.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 104.0) {
                                            if (x[3] <= 48.0) {
                                                y_pred += 7.0;
                                            }

                                            else {
                                                y_pred += 4.0;
                                            }
                                        }

                                        else {
                                            y_pred += 3.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 81.0) {
                                        y_pred += 1.0;
                                    }

                                    else {
                                        y_pred += 8.0;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[4] <= 323.5) {
                                if (x[1] <= 172.5) {
                                    if (x[2] <= 70.5) {
                                        y_pred += 7.0;
                                    }

                                    else {
                                        if (x[1] <= 134.0) {
                                            y_pred += 3.0;
                                        }

                                        else {
                                            if (x[3] <= 68.0) {
                                                y_pred += 5.0;
                                            }

                                            else {
                                                if (x[2] <= 140.0) {
                                                    y_pred += 6.0;
                                                }

                                                else {
                                                    if (x[0] <= 219.5) {
                                                        y_pred += 9.0;
                                                    }

                                                    else {
                                                        y_pred += 8.0;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 152.5) {
                                        if (x[2] <= 119.5) {
                                            y_pred += 5.0;
                                        }

                                        else {
                                            y_pred += 6.0;
                                        }
                                    }

                                    else {
                                        y_pred += 9.0;
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 349.5) {
                                    y_pred += 9.0;
                                }

                                else {
                                    y_pred += 8.0;
                                }
                            }
                        }

                        // tree #6
                        if (x[1] <= 130.5) {
                            if (x[1] <= 39.0) {
                                if (x[1] <= 23.5) {
                                    y_pred += 0.0;
                                }

                                else {
                                    if (x[2] <= 32.0) {
                                        y_pred += 2.0;
                                    }

                                    else {
                                        y_pred += 1.0;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 122.5) {
                                    if (x[3] <= 42.5) {
                                        y_pred += 2.0;
                                    }

                                    else {
                                        if (x[2] <= 104.0) {
                                            if (x[1] <= 105.5) {
                                                if (x[3] <= 105.0) {
                                                    if (x[3] <= 44.0) {
                                                        y_pred += 2.0;
                                                    }

                                                    else {
                                                        if (x[4] <= 5.0) {
                                                            y_pred += 5.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 98.5) {
                                                                y_pred += 4.0;
                                                            }

                                                            else {
                                                                if (x[3] <= 82.5) {
                                                                    y_pred += 3.0;
                                                                }

                                                                else {
                                                                    y_pred += 4.0;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    y_pred += 1.0;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 105.0) {
                                                    y_pred += 6.0;
                                                }

                                                else {
                                                    y_pred += 7.0;
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 3.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 135.0) {
                                        y_pred += 1.0;
                                    }

                                    else {
                                        y_pred += 8.0;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 267.5) {
                                if (x[1] <= 172.5) {
                                    if (x[2] <= 70.5) {
                                        y_pred += 7.0;
                                    }

                                    else {
                                        if (x[1] <= 135.5) {
                                            y_pred += 3.0;
                                        }

                                        else {
                                            if (x[3] <= 68.0) {
                                                y_pred += 5.0;
                                            }

                                            else {
                                                if (x[2] <= 141.5) {
                                                    y_pred += 6.0;
                                                }

                                                else {
                                                    if (x[1] <= 140.0) {
                                                        y_pred += 8.0;
                                                    }

                                                    else {
                                                        y_pred += 9.0;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 152.0) {
                                        if (x[0] <= 214.0) {
                                            y_pred += 5.0;
                                        }

                                        else {
                                            y_pred += 6.0;
                                        }
                                    }

                                    else {
                                        y_pred += 9.0;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 150.0) {
                                    y_pred += 9.0;
                                }

                                else {
                                    y_pred += 8.0;
                                }
                            }
                        }

                        // tree #7
                        if (x[1] <= 130.5) {
                            if (x[1] <= 39.5) {
                                if (x[1] <= 23.0) {
                                    y_pred += 0.0;
                                }

                                else {
                                    if (x[4] <= 60.5) {
                                        y_pred += 2.0;
                                    }

                                    else {
                                        y_pred += 1.0;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 122.0) {
                                    if (x[3] <= 42.5) {
                                        if (x[0] <= 104.5) {
                                            y_pred += 2.0;
                                        }

                                        else {
                                            y_pred += 7.0;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 104.0) {
                                            if (x[1] <= 117.0) {
                                                if (x[1] <= 46.5) {
                                                    y_pred += 1.0;
                                                }

                                                else {
                                                    if (x[4] <= 5.0) {
                                                        y_pred += 5.0;
                                                    }

                                                    else {
                                                        if (x[2] <= 98.5) {
                                                            y_pred += 4.0;
                                                        }

                                                        else {
                                                            if (x[0] <= 152.0) {
                                                                y_pred += 3.0;
                                                            }

                                                            else {
                                                                y_pred += 4.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                y_pred += 7.0;
                                            }
                                        }

                                        else {
                                            y_pred += 3.0;
                                        }
                                    }
                                }

                                else {
                                    y_pred += 1.0;
                                }
                            }
                        }

                        else {
                            if (x[4] <= 323.5) {
                                if (x[1] <= 172.5) {
                                    if (x[2] <= 70.5) {
                                        y_pred += 7.0;
                                    }

                                    else {
                                        if (x[2] <= 155.5) {
                                            if (x[3] <= 67.0) {
                                                y_pred += 5.0;
                                            }

                                            else {
                                                if (x[2] <= 140.0) {
                                                    y_pred += 6.0;
                                                }

                                                else {
                                                    if (x[4] <= 285.0) {
                                                        y_pred += 9.0;
                                                    }

                                                    else {
                                                        y_pred += 8.0;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 3.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 152.5) {
                                        if (x[3] <= 96.0) {
                                            y_pred += 5.0;
                                        }

                                        else {
                                            y_pred += 6.0;
                                        }
                                    }

                                    else {
                                        y_pred += 9.0;
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 349.5) {
                                    y_pred += 9.0;
                                }

                                else {
                                    y_pred += 8.0;
                                }
                            }
                        }

                        // tree #8
                        if (x[1] <= 130.5) {
                            if (x[1] <= 39.0) {
                                if (x[0] <= 49.0) {
                                    y_pred += 0.0;
                                }

                                else {
                                    if (x[4] <= 98.5) {
                                        y_pred += 4.0;
                                    }

                                    else {
                                        y_pred += 1.0;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 122.5) {
                                    if (x[4] <= 106.5) {
                                        if (x[3] <= 44.0) {
                                            y_pred += 2.0;
                                        }

                                        else {
                                            if (x[4] <= 18.0) {
                                                if (x[3] <= 53.5) {
                                                    y_pred += 5.0;
                                                }

                                                else {
                                                    y_pred += 6.0;
                                                }
                                            }

                                            else {
                                                y_pred += 4.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 103.0) {
                                            if (x[1] <= 108.5) {
                                                if (x[4] <= 227.5) {
                                                    if (x[2] <= 98.5) {
                                                        y_pred += 4.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 152.0) {
                                                            y_pred += 3.0;
                                                        }

                                                        else {
                                                            y_pred += 4.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    y_pred += 1.0;
                                                }
                                            }

                                            else {
                                                y_pred += 7.0;
                                            }
                                        }

                                        else {
                                            y_pred += 3.0;
                                        }
                                    }
                                }

                                else {
                                    y_pred += 1.0;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 270.0) {
                                if (x[1] <= 172.5) {
                                    if (x[2] <= 70.5) {
                                        y_pred += 7.0;
                                    }

                                    else {
                                        if (x[1] <= 134.0) {
                                            y_pred += 3.0;
                                        }

                                        else {
                                            if (x[3] <= 68.0) {
                                                y_pred += 5.0;
                                            }

                                            else {
                                                if (x[2] <= 141.5) {
                                                    y_pred += 6.0;
                                                }

                                                else {
                                                    if (x[1] <= 152.5) {
                                                        y_pred += 8.0;
                                                    }

                                                    else {
                                                        y_pred += 9.0;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 152.5) {
                                        if (x[3] <= 96.5) {
                                            y_pred += 5.0;
                                        }

                                        else {
                                            y_pred += 6.0;
                                        }
                                    }

                                    else {
                                        y_pred += 9.0;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 150.0) {
                                    y_pred += 9.0;
                                }

                                else {
                                    y_pred += 8.0;
                                }
                            }
                        }

                        // tree #9
                        if (x[1] <= 130.5) {
                            if (x[1] <= 39.0) {
                                if (x[2] <= 20.5) {
                                    y_pred += 0.0;
                                }

                                else {
                                    if (x[4] <= 60.5) {
                                        y_pred += 2.0;
                                    }

                                    else {
                                        y_pred += 1.0;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 122.5) {
                                    if (x[4] <= 106.5) {
                                        if (x[3] <= 44.0) {
                                            y_pred += 2.0;
                                        }

                                        else {
                                            if (x[3] <= 53.5) {
                                                y_pred += 5.0;
                                            }

                                            else {
                                                y_pred += 6.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 103.0) {
                                            if (x[1] <= 112.5) {
                                                if (x[3] <= 105.0) {
                                                    y_pred += 4.0;
                                                }

                                                else {
                                                    y_pred += 1.0;
                                                }
                                            }

                                            else {
                                                y_pred += 7.0;
                                            }
                                        }

                                        else {
                                            y_pred += 3.0;
                                        }
                                    }
                                }

                                else {
                                    y_pred += 1.0;
                                }
                            }
                        }

                        else {
                            if (x[4] <= 323.5) {
                                if (x[1] <= 172.5) {
                                    if (x[2] <= 70.5) {
                                        y_pred += 7.0;
                                    }

                                    else {
                                        if (x[2] <= 155.5) {
                                            if (x[3] <= 67.0) {
                                                y_pred += 5.0;
                                            }

                                            else {
                                                if (x[2] <= 140.0) {
                                                    y_pred += 6.0;
                                                }

                                                else {
                                                    if (x[1] <= 141.5) {
                                                        y_pred += 8.0;
                                                    }

                                                    else {
                                                        y_pred += 9.0;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 3.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 152.5) {
                                        if (x[0] <= 214.0) {
                                            y_pred += 5.0;
                                        }

                                        else {
                                            y_pred += 6.0;
                                        }
                                    }

                                    else {
                                        y_pred += 9.0;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 149.5) {
                                    y_pred += 9.0;
                                }

                                else {
                                    y_pred += 8.0;
                                }
                            }
                        }

                        // tree #10
                        if (x[1] <= 130.5) {
                            if (x[1] <= 46.5) {
                                if (x[2] <= 25.0) {
                                    y_pred += 0.0;
                                }

                                else {
                                    if (x[4] <= 92.5) {
                                        y_pred += 2.0;
                                    }

                                    else {
                                        y_pred += 1.0;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 122.0) {
                                    if (x[4] <= 108.0) {
                                        if (x[3] <= 52.0) {
                                            y_pred += 2.0;
                                        }

                                        else {
                                            y_pred += 6.0;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 103.0) {
                                            if (x[3] <= 48.5) {
                                                y_pred += 7.0;
                                            }

                                            else {
                                                if (x[2] <= 98.5) {
                                                    y_pred += 4.0;
                                                }

                                                else {
                                                    if (x[3] <= 82.5) {
                                                        y_pred += 3.0;
                                                    }

                                                    else {
                                                        y_pred += 4.0;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 3.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 106.5) {
                                        y_pred += 1.0;
                                    }

                                    else {
                                        y_pred += 8.0;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[4] <= 323.5) {
                                if (x[1] <= 172.5) {
                                    if (x[2] <= 70.5) {
                                        y_pred += 7.0;
                                    }

                                    else {
                                        if (x[1] <= 135.5) {
                                            y_pred += 3.0;
                                        }

                                        else {
                                            if (x[3] <= 67.0) {
                                                y_pred += 5.0;
                                            }

                                            else {
                                                if (x[2] <= 140.0) {
                                                    y_pred += 6.0;
                                                }

                                                else {
                                                    if (x[1] <= 145.5) {
                                                        y_pred += 8.0;
                                                    }

                                                    else {
                                                        y_pred += 9.0;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 152.5) {
                                        if (x[4] <= 252.5) {
                                            y_pred += 5.0;
                                        }

                                        else {
                                            y_pred += 6.0;
                                        }
                                    }

                                    else {
                                        y_pred += 9.0;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 150.5) {
                                    y_pred += 9.0;
                                }

                                else {
                                    y_pred += 8.0;
                                }
                            }
                        }

                        return y_pred / 10;
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