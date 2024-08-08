#include <iostream>

int main(){
    typedef double wages;  //wages is a synonym for double
    typedef float percent;  // percent is a synonym for float
    wages w1 = 1000;
    wages w2 = 1200;
    percent p1 = 23.5;
    percent p2 = 2.5;

    std::cout << "the wages earned by worker 1 is $" <<w1<<std::endl;
    std::cout << "the wages earned by worker 2 is $" <<w2<<std::endl;
    std::cout << "worker 1 will get a risr by " <<p1<<"%"<<std::endl;
    std::cout << "worker 2 will get a rise by " <<p2<<"%"<<std::endl;
    return 0;
}