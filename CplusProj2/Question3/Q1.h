#ifndef Q1_H
#define Q1_H
#include <cmath>

struct PiResults {
    double approx;
    double error;
};

PiResults pi_approx(int N);

#endif // Q1_H