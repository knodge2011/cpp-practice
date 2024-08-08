#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){
    int usersPin = 1234,pin, errorCounter = 0;

    do {
        cout << "PIN: ";
        cin>>pin;
        if(pin != usersPin){
            errorCounter++;
        }

    }while(errorCounter<3 && pin != usersPin);

    if(errorCounter<3)
        cout<< "Loading...";
    else
        cout << "blocked...";

    return 0;
}