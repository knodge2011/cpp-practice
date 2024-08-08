#include <iostream>

int main(){
    int num = 0;
    std::cout<< "Enter a number" <<std::endl; 
    std::cin >>num; 
    if(num>10){
        std::cout << "number is greater than 10" <<std::endl;
    }
    else if(num<10){
        std::cout << "number is less than 10" <<std::endl;
    }
    else{
        std::cout << "number equals to 10" << std::endl;
    }
    return 0;
}