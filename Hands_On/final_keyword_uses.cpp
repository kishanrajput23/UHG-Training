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
    void funct() final {
        cout<<"in derived class";
    }  
};

class derived2 : public derived {
    public:
    void funct1()  {
        cout<<"in derived2 class";
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
