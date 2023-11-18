#include <iostream>
#include <vector>
using namespace std;


vector<int> factorize(int n){
    vector<int> factors;
    int i=2;
    while(i<=n){
        if(n%i==0){
            factors.push_back(i);
        }
        i=i+1;
    }
    return factors;
}


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


vector<int> prime_factorize(int n) {
    vector<int> nfactors;
    vector<int> primefactors;
    nfactors = factorize(n);

    for (int k : nfactors){
        if(is_prime(k) == true){
            primefactors.push_back(k);
        }
    }
    return primefactors;
}


void print_vector(std::vector<int> v){
    for (int i : v){
        std::cout << i << ", ";
    }
    cout << "\n";
}


void test_prime_factorize() {
        cout << "prime factors of 2:" << "\n";
        print_vector(prime_factorize(2));
        cout << "prime factors of 72:" << "\n";
        print_vector(prime_factorize(72));
        cout << "prime factors of 196:" << "\n";
        print_vector(prime_factorize(196));
}



int main(){
    test_prime_factorize();
    return 0;
}