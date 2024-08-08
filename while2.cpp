#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){
    int number;
    cout<< "Number: ";
    cin>> number;

    if(number == 0)
        cout<< "You entered zero\n";
    else{
        if(number < 0)
            number = number * -1;
            
        int counter = 0;
        while(number >0){
            number /= 10;
            counter++;
        }
        cout<< "number contains "<< counter<<" digits"<<endl;
    }

    return 0;
}