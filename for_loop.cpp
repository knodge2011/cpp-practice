#include <iostream>

int main(){
    int sum = 0, val;
    std::cout<< "enter value";
    std::cin >> val;

    for (int i = 0; i < val; i++){
        sum += i;

    } 
    std::cout << sum << std::endl;
   return 0;

}
