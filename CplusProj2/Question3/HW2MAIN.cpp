#include <iostream>
#include <cmath>
#include <vector>
#include "Q1.h"
#include "Q2.h"
using namespace std;

int main(){
    PiResults results = pi_approx(10000);
    cout << "Approx pi is: "<< results.approx << endl;
    cout << "Error: " << results.error << endl;

    vector<int> values; //Vector that will hold powers of 10
    int i=1;
    while(i<=7){
        int entry = pow(10,i);
        values.push_back(entry);
        i +=1;
    }
    double* PiApproxs = approximations(values);

    for (int i=0; i<values.size()-1; i++){
        cout << "When N= " << values[i] <<", " << "approximation is: "<< PiApproxs[i] << endl;
    }
    delete[] PiApproxs; //Deletes the allocated memory
}