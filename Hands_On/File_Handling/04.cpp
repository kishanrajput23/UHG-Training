#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream fout;
    fout.open("test4.csv", ios::out | ios::app);

    int i, roll, phy, chem, bio, maths;
    string name;

    cout << "Enter details in below format\n| RollNo | Student_Name | Physics_Marks | Chemistry_Marks | Biology_Marks | Maths_Marks |" << '\n';
    
    for (i=0; i<3; i++) {
        cout << "Enter details of Student " << i+1 << endl;
        cin >> roll >> name >> phy >> chem >> bio >> maths;
        fout << roll << ", " << name << ", " << phy << ", " << chem << ", " << bio << ", " << maths << '\n';
    }
    
    return 0;
}
