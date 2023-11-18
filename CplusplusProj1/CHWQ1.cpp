#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a Number:";
    cin >>  n;
    
    switch (n) {
        case -1:
         cout << "Negative One";
         break;
        case 0:
         cout << "Zero";
         break;
        case 1:
         cout << "Positve One";
         break;
        default:
         cout << "Other Value";
         break;
    }
    return 0;
}