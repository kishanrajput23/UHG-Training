#include<iostream>
using namespace std;

[[depricated1]]

int fun(int a,int b) {

    return a+b;
}

int main() {
    int c = fun(2,5);
    cout<<"Sum : "<<c;
    
    return 0;
}
