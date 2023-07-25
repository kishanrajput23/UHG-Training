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
    catch (int a) {
        cout<<"Inside catch."<<endl;
    }
    cout<<"After catch block."<<endl;
    return 0;
}