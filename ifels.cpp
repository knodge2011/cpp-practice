#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){
    int num1, num2,num3;
    cout << "Enter length of each side of a triangle:" <<endl;
    cin>>num1,num2,num3;

    if(num1==num2 && num1==num3){
        cout<< "The triangle is equilateral"<<endl;
    }
    else{
        if(num1!=num2 && num1!=num3 && num2!=num3){
        cout<< "The triangle is scalene"<<endl;
        }
        else{
        cout<< "The triangle is isoclece"<<endl;
        }
    }
    return 0;

}