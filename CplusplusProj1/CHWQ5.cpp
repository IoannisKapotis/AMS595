#include <iostream>
#include <vector>
using namespace std;


vector<int> pascal(int n){
    if(n==0){ //0th row of Pascals
        return {1};

    }else if(n==1){ //1st row of Pascals
        return {1,1};

    }else { //Recursively calculates nth row of pascals, for n>1
        vector<int> rowb4 = pascal(n-1);
        vector<int> nthRow = {1};
        for(int i=1; i<n; ++i){
            nthRow.push_back(rowb4[i-1]+rowb4[i]);
        }
        nthRow.push_back(1);
        return nthRow;
    }
}


void print_vector(std::vector<int> v){
    for (int i : v){
        std::cout << i << " ";
    }
    cout << "\n";
}


int main(){
    int n = 5;
    for(int j=0;j<=n; ++j){
        vector<int> result = pascal(j);
        print_vector(result);
    }
    return 0;
}