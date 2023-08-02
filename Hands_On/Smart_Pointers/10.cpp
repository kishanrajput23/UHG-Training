#include<iostream>
#include<memory>

using namespace std;

class Double {
    double d;

    public:
    // Double(double d) {
    //     this->d = d;
    //     cout<<"Constructor : "<<d<<endl;
    // }
    //we can define constructor using below syatax as well

    Double(double d):d(d){cout<<"Constructor : "<<d<<endl;}
    
    ~Double() {
        cout<<"Destructor : "<<d<<endl;
    }

    void setValue(double d) {
        this->d = d;
    }
};

int main() {
    auto_ptr<Double> ptr(new Double(3.14));
    ptr->setValue(6.28);
    
    return 0;
}
