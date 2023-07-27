#include<iostream>
using namespace std;

template <class X, int c>

class sample {
    X a,b;
    public:
    sample(X a, X b) {
        this->a = a;
        this->b = b;
    }

    void print() {
        cout<<"a:"<<a<<" b:"<<b<<" c:"<<c<<endl;
    }
};


int main() {
    sample <int, 30> s1(10,20);
    s1.print();
    return 0;
}