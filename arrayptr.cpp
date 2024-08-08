#include <iostream>
using namespace std;

int main(){
    int lucknumbers[5];
    // cout << lucknumbers<<endl;
    // cout << lucknumbers[2]<<endl;
    // cout << *(lucknumbers + 2)<<endl;
    for(int i=0;i<=4;i++){
        cout << "number: ";
        cin >> lucknumbers[i];
    }
    for(int i=0;i<=4;i++){
        cout << *(lucknumbers + i)<< "  ";
    }


    return 0;
}