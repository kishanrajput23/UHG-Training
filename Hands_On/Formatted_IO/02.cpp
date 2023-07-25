#include <iostream>
#include<sstream>

using namespace std;

int main() {
    char c='A';
    cout.width(5);
    cout.fill('*');
    cout<<c<<endl;

    cout.width(10);
    cout.setf(ios::showpos);
    cout<<200;
    
    return 0;
}