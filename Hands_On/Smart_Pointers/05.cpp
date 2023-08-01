#include<iostream>
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
        cout<<"Destructor"<<endl;
    }

};

int main() {

    sample *s = new sample(5);
    cout<<"s : "<<s->getX()<<endl;          // no shared pointer
//-----------------------------------------------------------------------------------------

    shared_ptr<sample> p1(new sample(10));    //we can use this either below line of code
    // shared_ptr<sample> p1= make_shared<sample>(10);
    cout<<"p1 : "<<p1->getX()<<endl;
    cout<<"count : "<<p1.use_count()<<endl;

//-----------------------------------------------------------------------------------------

    shared_ptr<sample> p2=p1;
    cout<<"p2 : "<<p2->getX()<<endl;
    cout<<"count : "<<p2.use_count()<<endl;

//-----------------------------------------------------------------------------------------

    shared_ptr<sample> &p3=p1;      //reference variable
    cout<<"p3 : "<<p3->getX()<<endl;
    cout<<"count : "<<p3.use_count()<<endl;      //count will be 2 only

//-----------------------------------------------------------------------------------------

    shared_ptr<sample> *p4=&p1;     //pointer variable
    cout<<"p4 : "<<(*p4)->getX()<<endl;
    cout<<"count : "<<p4->use_count()<<endl;      //count will be 2 only

//-----------------------------------------------------------------------------------------

    return 0;
}