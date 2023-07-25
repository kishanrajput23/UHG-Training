#include<iostream>
#include<exception>

using namespace std;

int main() {

    try {
        cout<<"Inside try."<<endl;
        throw "a";
    }
    catch (int e) {
        cout<<e;
    }
    catch(...) {
        cout<<"Default exception."<<endl;
    }

    return 0;
}