#include <iostream>
 int main(){
    std::string readMe;
    while(std::getline(std::cin , readMe))

    if(!readMe.empty()){
        std::cout << "The string is: " <<std::endl;
        std::cout << readMe <<std::endl;
    }
    else{
        std::cout << "The string is empty" <<std::endl;
    }
    return 0;
 }