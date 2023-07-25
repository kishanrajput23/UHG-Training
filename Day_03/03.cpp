#include <iostream>
using namespace std;

class Student {
    public:
    char* name;
    int marks1, marks2;

    Student(char* studentName, int studentMarks1, int studentMarks2) {
        name = studentName;
        marks1 = studentMarks1;
        marks2 = studentMarks2;
    }

    void calc_media() {
        int totalMarks = marks1 + marks2;
        disp(totalMarks);
    }

    void disp(int totalMarks) {
        cout << "Name: " << name << endl;
        cout << "Total Media Mark: " << totalMarks << endl;
    }
};

int main() {
    char studentName[100];
    int studentMarks1, studentMarks2;

    cout << "Enter student name: ";
    cin.getline(studentName, 100);

    cout << "Enter marks for subject 1: ";
    cin >> studentMarks1;

    cout << "Enter marks for subject 2: ";
    cin >> studentMarks2;

    Student student(studentName, studentMarks1, studentMarks2);
    student.calc_media();

    return 0;
}
