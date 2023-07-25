#include <iostream>

using namespace std;

class A {
    int x=5;
    
    public:
    virtual void disp() {
        cout<<"x = "<<x<<endl;
    }
};

class B:public A {
    int y=10;
    
    public:
    void disp() {
        cout<<"y = "<<y<<endl;
    }
};


int main()
{
    A *a;
    A a1;
    a = &a1;
    a->disp();
    
    
    B b;
    a = &b;
    a->disp();

    return 0;
}
