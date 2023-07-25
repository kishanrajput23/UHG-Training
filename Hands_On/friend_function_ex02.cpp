#include<iostream>
using namespace std;


class A {
    int a;
    friend int add(A);

    public:
    A() {
        a = 0;
    }
};

int add(A obj) {
    obj.a += 5;
    return obj.a;
}

int main() {
    A obj;

    cout<<"Add : " << add(obj)<<endl;

    return 0;
}