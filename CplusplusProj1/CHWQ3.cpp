#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a1 = 1;
    int a2 = 1;
    int TermAfter = 1;
    
    while (TermAfter<=4000000){
      cout << TermAfter << ", ";
      a1 = a2;
      a2 = TermAfter;
      TermAfter = a1 + a2;
    } 
    return 0;
}