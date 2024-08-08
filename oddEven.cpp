#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){
    int num;
    cout << "Enter a numbers:" <<endl;
    cin>>num;

    if(num % 2 ==0){
        cout<< "The number is even"<<endl;
    }
    else{
        cout<< "The number is odd"<<endl;
    }
    return 0;

}