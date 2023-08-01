#include<iostream>
#include<thread>
#include<memory>

using namespace std;

class sample {
    int x;

    public:
    sample(int x) {
        this->x = x;
    };

    int getX() {
        return x;
    }

    ~sample() {
        cout<<"Destructor Called"<<endl;
    }

};

void fun(shared_ptr<sample> s) {
    cout<<"Inisde fun : "<<s->getX()<<endl;
    cout<<"Inside Count : "<<s.use_count()<<endl;
}

int main() {

    shared_ptr<sample> p1(new sample(10));  
    cout<<"p1 : "<<p1->getX()<<endl;
    cout<<"count : "<<p1.use_count()<<endl;
    fun(p1);
    // thread t1(fun, p1), t2(fun, p1);
    // t1.join();
    // t2.join();

    return 0;
}