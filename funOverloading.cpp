#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int sum(int a, int b);
float sum(float a, float b);
double sum(double a, double b);

int main(){
    cout << sum(3,7);

    return 0;
}

int sum(int a, int b){
    return a + b;
}
float sum(float a, float b){
    return a + b;
}
double sum(double a, double b){
    return a + b;
}