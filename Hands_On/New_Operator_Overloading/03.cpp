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
};

int main() {
    sample *obj = new sample();
    
    delete obj;
}