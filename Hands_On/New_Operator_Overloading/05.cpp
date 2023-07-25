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
        cout<<"Redefined New Operator and size is "<<size<<endl;
        return malloc(size);
    }

    void operator delete(void*  ptr) {
        cout<<"Memory Deleted."<<endl;
        free(ptr);
    }
};

int main() {
    sample *obj = new sample();
    
    delete obj;
}