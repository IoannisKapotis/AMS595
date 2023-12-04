#include <iostream>
#include <vector>
#include <cmath>
#include "Q2.h"
using namespace std;

double pi_approx_just_Ints(int N){

    double deltaXk = 1.0/N;
    double sum = 1.0;
    for (int i=1; i<=N; i++){
        double xK = i*deltaXk;
        sum += sqrt(1-(xK*xK));
    }
    sum = deltaXk * sum * 4;

    return sum;
    }

double* approximations(vector<int> v){
    int size = v.size();
    double* PiApproxs = new double[size];
    for (int i=0; i<size;i++){
        PiApproxs[i] = pi_approx_just_Ints(v[i]);
    }
    return PiApproxs; 


}