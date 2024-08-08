#include <iostream>
using std::cin;
using std::cout;
using std::endl;

//sum numbers between m and n

int recursive_sum(int a, int b){
    if(a==b)
        return a;
    return a + recursive_sum(a+1,b);
}

int main(){
    int m=2,n=6;
    cout<< "sum = "<<recursive_sum(m,n);

    return 0;
}