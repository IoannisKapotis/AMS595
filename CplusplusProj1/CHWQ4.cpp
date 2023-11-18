#include <iostream>
using namespace std;


bool is_prime(int n){
    bool result;
    int i=2;
    while(i <= n/2){ //Only possible divisor of a number must not exceed half of n
        if(n%i==0){ //If a number under our conditions divides n, it cannot be prime.
            result = false;
            goto ifnotprime; //Leaves loop and jumps to return result of false
        }
        i=i+1;
    }
    result = true; //Only get here if nothing divided n, thus prime.
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