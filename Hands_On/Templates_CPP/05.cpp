#include<iostream>
using namespace std;

template <class X>

class sample {
    X a,b;
    public:
    sample(X a, X b) {
        this->a = a;
        this->b = b;
    }

    void print() {
        cout<<"a:"<<a<<" b:"<<b<<endl;
    }
};


int main() {
    sample <int> s1(10,20);
    s1.print();
    return 0;
}