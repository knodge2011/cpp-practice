#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

void introduceMe(string name,string city, int age=0);

int main(){

    string name1,city1;
    int age1;
    cout<<"Name: ";
    cin>>name1;
    cout<<"City: ";
    cin>>city1;
    cout<<"Age: ";
    cin>>age1;

    introduceMe(name1, city1, age1);

    // introduceMe("Knowledge","masvingo", 26);
    // introduceMe("Robby","masvingo");

    return 0;
}
void introduceMe(string name, string city, int age){
    cout<<"My name is "<< name <<endl;
    cout<<"Im from "<< city <<endl;
    if(age !=0)
        cout<<"I am "<< age << "years old" <<endl;
}
