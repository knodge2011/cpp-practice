#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
using std::setw;

int main(){
    int height,width;
    cout<<"Height:";
    cin>>height;
    cout<<"Width:";
    cin>>width;
    char symbol;
    cout << "Symbol: ";
    cin>>symbol;

    for(int h=0;h<height;h++){
        for(int w=0;w<width;w++){
            cout <<setw(3)<<symbol;
        }
        cout<<endl;
    }
}