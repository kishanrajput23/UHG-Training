#include <iostream>

using namespace std;

class base {
    public:
    virtual void funct() {
    cout<<"in base class";
    }
};

class derived : public base {
    public:
    void funct() override {
        cout<<"in derived class";
    }  
};
int main()
{
    base *b;
    derived d;
    b = &d;
    b->funct();

    return 0;
}
