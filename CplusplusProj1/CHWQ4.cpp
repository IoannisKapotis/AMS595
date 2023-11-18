#include <iostream>
using namespace std;


bool is_prime(int n){
    bool result;
    int i=2;
    while(i <= n/2){
        if(n%i==0){
            result = false;
            goto ifnotprime;
        }
        i=i+1;
    }
    result = true;
    ifnotprime:
    return result;
}


void test_isprime() {
    cout << "is_prime(2) = " << is_prime(2) << '\n';
    cout << "is_prime(10) = " << is_prime(10) << '\n';
    cout << "is_prime(17) = " << is_prime(17) << '\n';
}


int main(){
    test_isprime();
    return 0;
}