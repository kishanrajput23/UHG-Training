#include<iostream>
#include<memory>

using namespace std;

int main() {
    //weak pointer concept
    // shared_ptr<int> sp = make_shared<int>(10);      //we can create by using auto keyword like below
    auto sp = make_shared<int>(10);
    weak_ptr<int> wp(sp);

    cout<<"sp count : "<<sp.use_count()<<endl;
    cout<<"wp count : "<<wp.use_count()<<endl;

    // wp.reset()       //if we use this then count will not increase
    auto sp1 = wp.lock();
    if(sp1) {
        cout<<"sp1 count : "<<sp1.use_count()<<endl;
    }
    else {
        cout<<"Empty"<<endl;
    }

    return 0;
}