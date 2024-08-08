#include <iostream>
using std::cin;
using std::cout;
using std::endl;
 int main(){
    float weight, height,bmi;
    cout<< "enter your weight(kg)"<<endl;
    cin>>weight;
    cout<< "enter your height(m)"<<endl;
    cin>>height;
    bmi = weight / (height*height);
    cout<<bmi<<endl;

    if(bmi<18.5)
        cout<< "underweight"<<endl;
    else if(bmi>=18.5 && bmi <25)
        cout<< "normal weight"<<endl;
    else
        cout<< "overweight"<<endl;
    return 0;
 }