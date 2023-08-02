#include<iostream>
using namespace std;

class Singleton {
    private:
    string name, place;

    Singleton() {
        cout<<"Constructor"<<endl;
    }

    Singleton(const Singleton &obj) = delete;
    static Singleton* ptr;

    public:
    static Singleton* getInstance() {
        if (ptr == NULL) {
            ptr = new Singleton();
            return ptr;
        }
        else {
            return ptr;
        }
    }

    void setValues(string name, string place) {
        this->name = name;
        this->place = place;
    }

    void print() {
        cout<<"Name : "<<name<<", Place : "<<place<<endl;
    }
};

Singleton* Singleton::ptr=NULL;

int main() {
    Singleton* ptr1 = Singleton::getInstance();
    ptr1->setValues("Kishan", "Bangalore");
    ptr1->print();
    cout<<"Address of ptr1 : "<<ptr1<<endl;

    cout<<endl;
    
    Singleton* ptr2 = Singleton::getInstance();
    ptr2->setValues("Kanhaiya", "Delhi");
    ptr2->print();
    cout<<"Address of ptr2 : "<<ptr2<<endl;

    return 0;
}