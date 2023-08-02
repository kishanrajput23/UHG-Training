#include<iostream>
#include<memory>

using namespace std;

class Mother {
    public:
    ~Mother() {
        cout<<"Mother Destructor"<<endl;
    }
    void setSon() {
    }
};

class Son {
    public:
    Son(shared_ptr<Mother>) {
        cout<<"Son Constructor"<<endl;
    }
    ~Son() {
        cout<<"Son Destructor"<<endl;
    }
};

int main() {

    shared_ptr<Mother> mother(new Mother);
    shared_ptr<Son> son(new Son(mother));
    
    return 0;
}