#include<iostream>
#include<memory>

using namespace std;

int main() {

    shared_ptr<int> p(new int(10));
    shared_ptr<int> p1 = make_shared<int>(20);
    cout<<"*p : "<<*p<<" "<<endl;
    cout<<"*p1 : "<<*p1<<endl;
    return 0;
}