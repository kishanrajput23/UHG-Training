#include<iostream>
using namespace std;

class shape {
    public:
    float d;

    void getData() {
        cout<<"Enter dimension : ";
        cin>>d;
    }

    virtual float area() = 0; 
};

class square : public shape {

    public:
    float area() {
        return d * d;
    }
};


// int a = 10;

// int &b = a;


int main() {

    shape *sh;

    square s;

    sh = &s;
    sh->getData();
    cout<<"Area  : "<< sh->area()<<endl;

    return 0;
}