#include<iostream>
using namespace std;

int main() {
    int a = -1;
    cout<<"Before try."<<endl;

    try {
        cout<<"Inisde try."<<endl;
        if (a<0) {
            throw a;
        }
        cout<<"After throw."<<endl;
    }
    catch (char *e) {
        cout<<"Inside catch."<<endl;
    }
    catch(...) {
        cout<<"Default exception."<<endl;
    }
    cout<<"After catch block."<<endl;
    return 0;
}