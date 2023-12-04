#include <iostream>
#include <cmath>
#include "Q1.h"
using namespace std;


PiResults pi_approx(int N){

    double deltaXk = 1.0/N;
    double sum = 1.0;
    for (int i=1; i<=N; i++){
        double xK = i*deltaXk;
        sum += sqrt(1-(xK*xK));
    }
    sum = deltaXk * sum * 4;

    PiResults results;
    results.approx = sum;
    results.error = abs(M_PI - sum);

    return results;

    }
