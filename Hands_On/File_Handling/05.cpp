#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

int main () {
    fstream fin;
    fin.open("test4.csv", ios::in);

    int rollno, rollno2;
    vector<string> row;
    string temp, word;
    bool recordFound = false; 

    cout<<"Enter the roll no of student to display details: "; 
    cin>>rollno;

    while (getline(fin, temp)) { 
        row.clear();
        stringstream s(temp);
        
        while(getline(s, word, ',')) {
            row.push_back(word);
        }
        
        rollno2 = stoi(row[0]);
            
        if (rollno == rollno2) {
            cout<<"Name : "<<row[1]<<endl;
            cout<<"Physics : "<<row[2]<<endl;
            cout<<"Chemistry : "<<row[3]<<endl;
            cout<<"Biology : "<<row[4]<<endl;
            cout<<"Maths : "<<row[5]<<endl;
                
            recordFound = true;
            break;
        }
    }

    if (!recordFound) {
        cout << "Record not found." << endl;
    }
    fin.close();

    return 0;
}