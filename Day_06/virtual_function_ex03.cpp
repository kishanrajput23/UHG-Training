#include <iostream>

using namespace std;

class shape {
    
    public:
    virtual void disp()=0;
};

class circle:public shape {
    
    public:
    void disp() {
        cout<<"circle"<<endl;
    }
};

class rectangle:public shape {
    
    public:
    void disp() {
        cout<<"rectangle"<<endl;
    }
};


int main()
{
    shape *s;
    
    circle c;
    s = &c;
    s->disp();
    
    rectangle r;
    s = &r;
    s->disp();

    return 0;
}
