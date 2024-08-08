#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void showMenu(){
    cout << "*********MENU**********"<< endl;
    cout << "1. Check balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
    cout << "***********************"<< endl;
}

int main(){
    //check balance, deposit, withdraw, menu//
    int option;
    double balance = 500;

    do{
        showMenu();
        cout << "option: ";
        cin >> option;
        system("cls");

        switch (option)
        {
        case 1:
            cout<< "The balance is $"<< balance<< endl;break;
        case 2:
            cout<< "Deposit: ";
            double depositAmmount;
            cin >> depositAmmount;
            balance += depositAmmount;
            break;
        case 3:
            cout<< "Withdraw: ";
            double withdrawAmmount;
            cin >> withdrawAmmount;
            if(withdrawAmmount <= balance)
                balance -= withdrawAmmount;
            else
                cout<< "Not enough money"<< endl;
            break;
        default:
            cout<< "Wrong option "<< endl;
            break;
        }
    }while (option != 4);
    
    return 0;
}