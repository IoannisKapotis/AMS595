#include <iostream>
#include <vector>
using namespace std;

void print_vector(vector<int> v){
    for (int i : v){ //Cycles through each position in vector, and displays it iteratively
        cout << i << "";
    }
}

int main(){
    vector<int> vector = {1,2,3,4,5};
    print_vector(vector);
    return 0;
}