#include <iostream>
#include <cmath>
using namespace std;

struct PiResults{ //Struct to hold two return values for function
    double approx;
    double error;
};

PiResults pi_approx(int N){ //Function that approximates pi; returns type struct
    double deltaXk = 1.0/N;
    double sum = 1.0; //First point is x=0, which f(x)=1

    for (int i=1; i<=N; i++){
        double xK = i*deltaXk;
        sum += sqrt(1-(xK*xK));
    }
	//Multiply sum of all f(x) by Δx_k, and multiply by 4 to give est. of π
    sum = deltaXk * sum * 4;

    PiResults results; //Assigns appropriates values to struct variables
    results.approx = sum;
    results.error = abs(M_PI - sum);

    return results;
    }

int main(){
    int N;

    cout << "Please enter N: ";
    cin >> N;

    PiResults results = pi_approx(N);

    cout << "Approximated value of pi: " << results.approx << endl;
    cout << "Error: " << results.error << endl;
	return 0;
}
