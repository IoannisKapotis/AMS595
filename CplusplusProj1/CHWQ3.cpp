#include <iostream>
#include <vector>
using namespace std;

int main(){ //Generates all terms of Fibonnaci sequence that do not exceed 4,000,000
    int a1 = 1;
    int a2 = 1;
    int TermAfter = 1;
    
    while (TermAfter<=4000000){
      cout << TermAfter << ", ";
      a1 = a2;
      a2 = TermAfter;
      TermAfter = a1 + a2; //nth term in Fibonnaci sequence is sum of all previous
    } 
    return 0;
}