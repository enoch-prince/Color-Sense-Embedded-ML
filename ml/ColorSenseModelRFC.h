#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class RandomForest {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        uint8_t votes[4] = { 0 };
                        // tree #1
                        if (x[4] <= 106.5) {
                            if (x[2] <= 31.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[0] <= 87.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            votes[3] += 1;
                        }

                        // tree #2
                        if (x[4] <= 106.5) {
                            if (x[0] <= 21.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[0] <= 75.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            votes[3] += 1;
                        }

                        // tree #3
                        if (x[2] <= 135.0) {
                            if (x[2] <= 30.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[2] <= 50.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            votes[3] += 1;
                        }

                        // tree #4
                        if (x[4] <= 115.5) {
                            if (x[3] <= 66.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[4] <= 44.5) {
                                    if (x[4] <= 36.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 75.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            votes[3] += 1;
                        }

                        // tree #5
                        if (x[0] <= 141.0) {
                            if (x[3] <= 66.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[2] <= 45.5) {
                                    if (x[0] <= 132.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[4] <= 85.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[2] <= 126.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            votes[3] += 1;
                        }

                        // tree #6
                        if (x[0] <= 142.0) {
                            if (x[2] <= 28.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[0] <= 75.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[1] <= 135.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[4] <= 66.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            votes[3] += 1;
                        }

                        // tree #7
                        if (x[1] <= 176.5) {
                            if (x[2] <= 30.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[0] <= 83.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            votes[3] += 1;
                        }

                        // tree #8
                        if (x[2] <= 135.0) {
                            if (x[2] <= 31.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[2] <= 53.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            votes[3] += 1;
                        }

                        // tree #9
                        if (x[2] <= 135.0) {
                            if (x[2] <= 28.5) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[2] <= 50.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            votes[3] += 1;
                        }

                        // tree #10
                        if (x[4] <= 106.5) {
                            if (x[3] <= 66.0) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[2] <= 45.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            votes[3] += 1;
                        }

                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 4; i++) {
                            if (votes[i] > maxVotes) {
                                classIdx = i;
                                maxVotes = votes[i];
                            }
                        }

                        return classIdx;
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
                            case 3:
                            return "red";
                            case 4:
                            return "white";
                            default:
                            return "Houston we have a problem";
                        }
                    }

                protected:
                };
            }
        }
    }