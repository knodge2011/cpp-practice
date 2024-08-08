#include <iostream>
#include<string>
 int main(){
    std::string largest;
    std::string str1= "knowledge";
    std::string str2= "Hello";
    std::string str3= "world";

    if(str1>str2 && str1>str3){
        largest = str1;
    }
    else if(str2>str1 && str2>str3){
        largest = str2;
    }
    else{
        largest = str3;
    }
    std::cout<< "Largest is "<<largest<< std::endl;
    return 0;
}