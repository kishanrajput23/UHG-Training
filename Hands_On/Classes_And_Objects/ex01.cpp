#include<iostream>
using namespace std;

class Animal {
    public:
    void bark() {
        cout<<"barking..."<<endl;
    }

    void eat() {
        cout<<"eating..."<<endl;
    }
};

int main() {

    Animal dog;
    dog.bark();
    dog.eat();

    return 0;
}