#include <iostream>
using std:: string;
using std:: endl;
using std:: cin;
using std::cout;

class Employee{
private:
    string Name;
    string Company;
    int Age;

public:
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    void setCompany(string company){
        Company = company;
    }
    string getCompany(){
        return Company;
    }
    void setAge(int age){
        if(age >= 18)
        Age = age;
    }
    int getAge(){
        return Age;
    }

    void IntroduceYrself(){
        cout<< "Name: "<<Name<<endl;
        cout<< "Company: "<<Company<<endl;
        cout<< "Age: "<<Age<<endl;
        cout<< "Age: "<<Age<<endl;
    }
    Employee(string name,string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }

};

int main(){
    Employee employee1 = Employee("Knowledge","Google",26);
    employee1.IntroduceYrself();
    Employee employee2 = Employee("Robby","Amazon",24);
    employee2.IntroduceYrself();

    employee1.setAge(12);
    cout << employee1.getName()<< " is "<< employee1.getAge()<< " years old"<<endl;

    return 0;
}
