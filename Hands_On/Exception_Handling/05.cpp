#include<iostream>
#include<exception>

using namespace std;

void myhandler() {
    cout<<"Default error message."<<endl;
    abort();
}

int main() {
    set_terminate(myhandler);

    try {
        cout<<"Inside try."<<endl;
        throw 10;
        cout<<"hi..";
    }
    catch (char *e) {
        cout<<e;
    }

    cout<<"After throw."<<endl;

    return 0;
}