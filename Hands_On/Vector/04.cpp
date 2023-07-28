#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> student;
    
    student[1] = "Kishan";
    student[2] = "Aastha";
    
    student.insert(make_pair(3, "Priyanshi"));
    student.insert(make_pair(4, "Utpal"));
    
    student[5] = "Nayan";
    student[6] = "Ajit";
    
    for (int i=1; i<=student.size(); i++) {
        cout<<"Student["<<i<<"] : "<< student[i]<<endl;
    }

    return 0;
}
