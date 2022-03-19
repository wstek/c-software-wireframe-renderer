#ifndef C_TEST_UTILS_H
#define C_TEST_UTILS_H

float lerp(float x0, float x1, float alpha) {
    return (1 - alpha) * x0 + alpha * x1;
}

#endif //C_TEST_UTILS_H
