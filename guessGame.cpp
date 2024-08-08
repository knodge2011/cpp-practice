#include <iostream>
using std::cin;
using std::cout;
using std::endl;
 int main(){
    int hostUserNum, guestUserNum;
    cout <<"Host: ";
    cin >> hostUserNum;
    system("cls");
    cout <<"Guest: ";
    cin>>guestUserNum;

    (hostUserNum == guestUserNum)? cout<<"Correct": cout<<"Failed!";

    /*if(hostUserNum == guestUserNum)
        cout<<"Correct";
    else
        cout<<"Failed!";
    */
    return 0;
 }