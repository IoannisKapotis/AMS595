#include <iostream>

int main() {
    int n;
    std::cout << "Enter a Number:";
    std::cin >>  n;
    
    switch (n) {
        case -1:
         std::cout << "Negative One";
         break;
        case 0:
         std::cout << "Zero";
         break;
        case 1:
         std::cout << "Positve One";
         break;
        default:
         std::cout << "Other Value";
         break;
    return 0;
    }
}