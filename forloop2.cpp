#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){
    int grade, sum=0;

    for(int i=0; i<3;i++){
        do{
            cout<< "Enter grade "<<i+1<<":";
            cin>>grade;
        }while(grade<1 || grade >5);
        sum +=grade;
    }
    cout << "sum : "<<sum <<endl;
    cout << "Avg grade : "<< (float)sum/3.0 <<endl;
}