#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){
    // Write out all the numbers between 100 and 500 that 
    //are divisible by 3 and 5
    int counter = 100;

    while(counter <= 500){
        if(counter % 3 == 0 && counter % 5 == 0)
            cout << counter <<endl;
        counter++;
    }

    return 0;
}