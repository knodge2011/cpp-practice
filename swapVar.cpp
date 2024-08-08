#include <iostream>
using std::cin;
using std::cout;
using std::endl;
 int main(){
    int a = 20;
    int b = 30;
    /*
    int temp = a;
    a=b;
    b= temp;
    cout<< "a = " <<a<< "b = "<<b <<endl; 
    */
    a = a+b;
    b = a-b;
    a = a-b;
    cout<< "a = " <<a<< "b = "<<b <<endl;
    
    return 0;
 }