#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
using std::setw;

int main(){
    int length;
    cout<<"Length:";
    cin>>length;
    char symbol;
    cout << "Symbol: ";
    cin>>symbol;

    for(int i=0;i<length;i++){
        for(int j=0; j<=i;j++){
            cout<<setw(3)<<symbol;
        }
        cout<<endl;
    }
    cout<<endl;cout<<endl;
    for(int i=length;i>0;i--){
        for(int j=0; j<i;j++){
            cout<<setw(3)<<symbol;
        }
        cout<<endl;
    }

    return 0;
}