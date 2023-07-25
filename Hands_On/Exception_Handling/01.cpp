#include<iostream>
using namespace std;

float division(int x , int y) {
    if (y==0) {
        throw "run time error...";
    }

    return (x/y);
}

int main() {
    int a = 50;
    int b = 10;

    try {
        float div = 0;
        div = division(a, b);
        cout<<"Answer : "<<div<<endl;
    }
    catch (const char*e) {
        cerr<<e<<endl;
    }
    cout<<"Program Finished..."<<endl;

    return 0;
}