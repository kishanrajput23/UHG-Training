#include <iostream>
using namespace std;

class base {
    //.....
};

class derived : public base {
    //.....
};

int main() {
    derived d;
    try {
        throw d;
    }
    catch(derived d) {
        cout<<"Derived exception"<<endl;
    }
    catch(base b) {
        cout<<"Base exception"<<endl;
    }
    
    return 0;
}
