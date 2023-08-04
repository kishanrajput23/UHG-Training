#include <iostream>
using namespace std;

int fun() {
    int a=12;
    return a;
}

int main() {
    if (int a = fun(); a>0) {
        cout<<"even"<<endl;
    }
    else {
        cout<<"odd"<<endl;
    }
    return 0;
}