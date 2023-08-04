#include<iostream>
#include<memory>

using namespace std;

void print(weak_ptr<int>& weakptr) {
    if (auto sharedptr = weakptr.lock()) {
        cout<<"value through weak pointer "<<*sharedptr<<endl;
    }
    else {
        cout<<"pointer is expired"<<endl;
    }
}
int main() {
    
    shared_ptr<int> sharedptr = make_shared<int>(42);
    weak_ptr<int> weakptr = sharedptr;
    print(weakptr);
    
    return 0;
}