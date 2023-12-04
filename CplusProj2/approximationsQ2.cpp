#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

double pi_approx_intervals(int N){ //Same function to estimate π
    double deltaXk = 1.0/N;
    double sum = 1.0;

    for (int i=1; i<=N; i++){
        double xK = i*deltaXk;
        sum += sqrt(1-(xK*xK));
    }

    sum = deltaXk * sum * 4;

    return sum;
    }

double* approximations(vector<int> v){ //function that returns type Ddnamically allocated array
    int size = v.size();
    double* PiApproxs = new double[size]; //Sets said array to have same size as v
    for (int i=0; i<size;i++){
        PiApproxs[i] = pi_approx_intervals(v[i]);
    }
    return PiApproxs; 
}

int main(){
    // test vector
    vector<int> testvector = {10,100,1000,10000};
    double* PiApproxs = approximations(testvector);
    int TVsize = testvector.size();

    for (int i=0; i<TVsize; i++){
        cout << "When N= " << testvector[i] <<", " << "approximation is: "<< PiApproxs[i] << endl;
    }
    delete[] PiApproxs;
    return 0;
}
