#include<iostream>
#include<sstream>
#include<iomanip>

using namespace std;

int main() {
    int num = 100;
    stringstream str("            Program");
    string line;
    getline(str>>ws, line);
    cout<<line<<endl;
    cout<<"a"<<ends;
    cout<<"b"<<endl;
    cout<<"c"<<endl;

    cout<<setbase(16)<<num<<endl;
    return 0;
}