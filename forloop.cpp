#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){
    //factorial of a number
    //6!=1*2*3*4*5*6 = 720
    int number;
    cout<<"Enter a number: ";
    cin >> number;
    int factorial=1;

    // for(int i=1;i<=number;i++){
    // factorial = factorial * i; 
    // }
    for(int i=number; i>=1; i--){
       factorial = factorial * i; 
    }
    cout<< number << "! =" << factorial;
}