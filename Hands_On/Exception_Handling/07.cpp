#include<iostream>
#include<exception>

using namespace std;

class base{};
class derived:public base{};

int main() {
    derived d;

    try {
        throw d;
    }
    catch (derived d) {
        cout<<"derived caught"<<endl;
    }
    catch (base b) {
        cout<<"base caught"<<endl;
    }
    catch(...) {
        cout<<"Default exception."<<endl;
    }

    return 0;
}