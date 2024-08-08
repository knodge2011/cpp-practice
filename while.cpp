#include <iostream>

int main(){
    int count = 0, sum = 0, value; 
    std::cout << "Enter number "<<std::endl;
    std::cin >>value;
    while (count <=value)
    {
        //std::cout << "hello there" << std::endl;
        sum += count;
        count ++; 
    }
    
    std::cout << "Sum of 0 to "<<value <<"is "<<  sum;
    return 0;

}
