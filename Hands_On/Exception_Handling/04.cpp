#include<iostream>
using namespace std;

int main() {
    try {
        cout<<"Inside try."<<endl;
        throw 10;
        cout<<"hi..";
    }
    catch (char *e) {
        cout<<e;
    }
    catch(...) {
        cout<<"Default exception."<<endl;
    }
    return 0;
}