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
    
    void* operator new(size_t size, int x) {
        cout<<"Redefined New Operator and size is "<<size<<endl;
        // return malloc(size*x);
        return new size_t(size);
    }

    void operator delete(void*  ptr) {
        cout<<"Memory Deleted."<<endl;
        free(ptr);
    }
};

int main() {
    sample *obj = new(5) sample();
    
    delete obj;
}