#include <iostream>
 int main(){
    std::string readMe;
    while(std::getline(std::cin , readMe)){
        auto len = readMe.size();
        std::cout << "the length of the string is: "<<len<<std::endl;
    }

    return 0;
}