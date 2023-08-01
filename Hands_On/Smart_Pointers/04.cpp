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

    sample *s = new sample(10);
    cout<<"s : "<<s->getX()<<endl;          // no unique pointer
//-----------------------------------------------------------------------------------------

    unique_ptr<sample> p(new sample(20));    // one pointer one ownership
    cout<<"p : "<<p->getX()<<endl;

//-----------------------------------------------------------------------------------------

    sample *s1 = new sample(30);
    unique_ptr<sample> p1(s1);              //not good mthd bcoz s1 can assign to another objects 
    cout<<"p1 : "<<p1->getX()<<endl;        //also which is not allowd in unidue ptr

//-----------------------------------------------------------------------------------------

    // unique_ptr<sample> p2 = make_unique<sample>(40);
    // cout<<"p2 : "<<p2->getX()<<endl;

//-----------------------------------------------------------------------------------------

    unique_ptr<sample> p3 = move(p1);
    cout<<"p3 : "<<p3->getX()<<endl;        //p1 is null ptr

//-----------------------------------------------------------------------------------------

    sample *s3 = p3.get();                  //reading the pointer loc managed by p3 and assigning to s3
    cout<<"s3 : "<<s3->getX()<<endl;
    cout<<"After getting p3 : "<<p3->getX()<<endl;

//-----------------------------------------------------------------------------------------

    sample *s4 = p3.release();
    cout<<"s4 : "<<s4->getX()<<endl;
    // cout<<"After release p3 : "<<p3->getX()<<endl;   no o/p bcoz ownership of p3 released.

//-----------------------------------------------------------------------------------------

    unique_ptr<sample> p4(new sample(100));
    cout<<"After swap p : "<<p->getX()<<endl;
    p.swap(p4);
    cout<<"After swap p : "<<p->getX()<<endl;

//-----------------------------------------------------------------------------------------

    return 0;
}

