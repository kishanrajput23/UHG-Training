#include <iostream>
using namespace std;

void printGrade(char grade) {
    switch (grade) {
        case 'A':
            cout << "Excellent"<<endl;
            break;
        case 'B':
            cout << "Good"<<endl;
            break;
        case 'C':
            cout << "Average"<<endl;
            break;
        case 'D':
            cout << "Below Average"<<endl;
            break;
        case 'E':
            cout << "Fail"<<endl;
            break;
        default:
            cout << "Invalid grade"<<endl;
            break;
    }
}

int main() {
    char grade;

    cout<<"Enter the grade : ";
    cin>>grade;
    
    printGrade(grade);
    
    return 0;
}
