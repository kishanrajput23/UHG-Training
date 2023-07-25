#include<iostream>
using namespace std;

class sample {
    int i, j, k;
    
    public:
    
    sample() {
        cout<<"Constructor"<<endl;
    }
    
    ~sample() {
        cout<<"Destructor"<<endl;
    }
    
    void* operator new(size_t size) {
        cout<<"Redefined new operator"<<endl;
        return malloc(size);
    }
};

int main() {
    sample *obj = new sample();
    
    delete obj;
}