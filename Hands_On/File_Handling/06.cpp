#include<iostream>
#include<fstream>
using namespace std;

int main() {

    fstream inf("test6.txt");
    string strData;

    inf.seekg(5, ios::beg);
    inf.seekg(5, ios::cur);
    getline(inf, strData);
    cout<<strData<<endl;        // prints "is Kishan Kumar Rai."

    inf.seekg(-10, ios::end);
    getline(inf, strData);
    cout<<strData<<endl;        // prints "g VS Code."

    return 0;
}