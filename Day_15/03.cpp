#include <iostream>
using namespace std;

class Employee {
    string name;
    int employeeID, salary;

    public:
    Employee(string empName, int empID, int sal) {
        name = empName;
        employeeID = empID;
        salary = sal;
    }

    void getDetails() {
    cout<<"Name: " <<name<<endl;
    cout<<"Employee ID: "<<employeeID<<endl;
    cout<<"Salary: $" <<salary<<endl;
    }

    void operator +=(int bonus) {
        salary += bonus;
    }
};

int main() {
    
    Employee emp1("Kishan", 1, 30000);
    Employee emp2("Utpal", 2, 20000);

    cout<<"Employee Details Before Getting Bonus"<<endl;
    emp1.getDetails();
    cout<<endl;
    emp2.getDetails();

    emp1 += 5000;
    emp2 += 10000;

    cout<<endl<<"Employee Details After Getting Bonus"<<endl;
    emp1.getDetails();
    cout<<endl;
    emp2.getDetails();

    return 0;
}
