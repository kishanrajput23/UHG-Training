#include<iostream>
using namespace std;

class A {
    public:
    int x,y;

    void getData() {
        cout<<"Enter values : ";
        cin>>x>>y;
    }
};

class B : public A {
    public:

    void prod() {
        cout<< "Product : "<<x*y<<endl;
    }
};

class C : public A {

    public:
    void sum() {
        cout<<"Sum : "<< x+y <<endl;
    }
};

int main() {

    B b;
    C c;
    b.getData();
    b.prod();
    
    c.getData();
    c.sum();

    return 0;
}