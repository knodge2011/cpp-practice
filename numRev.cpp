#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){
    //reverse a number
    int number, revNumber=0;
    cout<< "Number: ";
    cin>> number;

    while(number !=0){
        revNumber *= 10;
        //int lastDigit = number % 10;
        revNumber += number % 10;
        number/=10;
    }
    cout << "Reversed: "<< revNumber;
    return 0;
}