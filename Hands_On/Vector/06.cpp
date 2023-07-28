#include <iostream>
#include <map>
using namespace std;

int main()
{
    map <int, string> student {{1, "Denise"}, {2, "Blake"}, {3, "Courtney"}, {4, "John"}, {5, "Jennifer"}};
    map <int, string>::iterator iter;

    cout<< "Initial Values:" << endl;

    for (iter = student.begin(); iter!=student.end(); ++iter) {
        cout << iter->second << ", ";
    }
    cout << endl;
    
    student.erase(student.find(2), student.find(5));
    
    cout << "\nFinal Values:" << endl;
    
    for (iter=student.begin(); iter!=student.end(); ++iter) {
        cout <<iter->second << ", ";
    }
    cout<<endl;
    return 0;
}
