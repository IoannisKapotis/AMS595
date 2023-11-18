#include <iostream>
#include <vector>
using namespace std;

vector<int> factorize(int n){
    vector<int> answer;
    int i=1;
    while(i<=n){
        if(n%i==0){
            answer.push_back(i);
        }
        i=i+1;
    }
    return answer;
}


void print_vector(std::vector<int> v){
    for (int k : v){
        std::cout << k << ", " ;
    }
    cout << "\n";
}


void test_factorize(){
        cout << "Factors of 2:" << "\n";
        print_vector(factorize(2));
        cout << "Factors of 72:" << "\n";
        print_vector(factorize(72));
        cout << "Factors of 196:" << "\n";
        print_vector(factorize(196));
    }


int main(){
    test_factorize();
    return 0;

}