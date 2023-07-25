#include<iostream>
using namespace std;

void* operator new(size_t size) {
    cout<<"New Operator Overloading"<<endl;
    void *p = malloc(size*2);
    return p;
}

int main() {
    int n = 5;
    int *p = new int[n];
    
    for (int i=0; i<n*2; i++) {
        p[i] = i;
    }
    
    cout<<"Array elements are : ";
    
    for(int i=0; i<n*2; i++) {
        cout<<p[i]<<" ";
    }

    cout<<endl;
    
    delete []p;
}