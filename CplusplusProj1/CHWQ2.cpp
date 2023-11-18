#include <iostream>
#include <vector>

void print_vector(std::vector<int> v){
    for (int i : v){
        std::cout << i << "";
    }
}

int main(){
    std::vector<int> vector = {1,2,3,4,5};
    print_vector(vector);
    return 0;
}