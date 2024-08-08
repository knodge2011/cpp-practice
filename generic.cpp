#include <iostream>
using std::cin;
using std::cout;
using std::endl;

template <typename T>
void swap(T & a, T & b){
    T temp = a;
    a = b;
    b = temp;
}

int main(){
    int a=3, b=5;
    cout << a << " - "<<b<<endl;
    swap<int>(a,b);
    cout << a << " - "<<b<<endl;

    char c='c',d='d';
    cout << c << " - "<<d<<endl;
    swap<char>(c,d);
    cout << c << " - "<<d<<endl;

    return 0;
}