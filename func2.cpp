#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

bool isPrimeNumber(int num){
    bool isPrimeFlag=true;
    for(int i = 2;i<num; i++){
        if(num % i==0)
            return false;     
    } 
    return true;
}

int main(){
    for(int i=1;i<1000;i++){
       bool isPrime = isPrimeNumber(i); 
       if(isPrime)
            cout<<i << " is prime"<< endl;
    }

    return 0;
}