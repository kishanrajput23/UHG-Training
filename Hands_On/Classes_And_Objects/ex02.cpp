#include<iostream>
using namespace std;

class Employee {
    string name;
    int age, salary;

    public:
    void setData(string name1, int age1, int salary1) {
        name = name1;
        age = age1;
        salary = salary1;
    }
    
    void readData() {
        cout<<"Employee Name : "<<name<<endl;
        cout<<"Employee Age : "<<age<<endl;
        cout<<"Employee Salary : "<<salary<<endl;

    }
};

int main() {

    Employee e1;
    e1.setData("Kishan", 23, 25000);
    e1.readData();

    return 0;
}