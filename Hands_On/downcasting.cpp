#include <iostream> 
using namespace std;

class Base {virtual void fun() {}};

class Derived : public Base{};

int main() {
    Base* b = new Derived;
    Derived *d = dynamic_cast<Derived*>(b);
    if (d!=NULL) {
        cout<<"works"<<endl;
    }
    else {
    cout<<"not"<<endl;
    }
    
    return 0;
}