#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){
    float num1,num2;
    char operation;
    cout << "---Calculator---"<<endl;
    cin>>num1>>operation>>num2;

    switch(operation){
        case '-':cout<<num1<<operation<<num2<<"="<<num1 - num2;break;
        case '+':cout<<num1<<operation<<num2<<"="<<num1 + num2;break;
        case '/':
            if(num2!=0)
                cout<<num1<<operation<<num2<<"="<<num1 / num2;
            else
                cout<< "Zero Division Error Do not divide by Zero";
            break;
        case '*':cout<<num1<<operation<<num2<<"="<<num1 * num2;break;
        case '%':
            bool isNum1Int,isNum2Int;
            isNum1Int= ((int)num1==num1);
            isNum2Int= ((int)num2==num2);

            if(isNum1Int && isNum2Int){
                if(num2!=0)
                    cout<<num1<<operation<<num2<<"="<<(int)num1 % (int)num2;
                else
                    cout<< "Zero Division Error! Do not divide by Zero";
            }
            else
                cout<<"Only valid for integers" ;
            break;
        default:
            cout<< "Invalid Operation";break;
    }

        return 0;
    }