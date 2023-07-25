#include<iostream>
using namespace std;

int main() {
    int n = 5;
    int *p = new int[5];
    
    for (int i=0; i<n; i++) {
        p[i] = i;
    }
    
    cout<<"Array elements are : ";
    
    for(int i=0; i<n; i++) {
        cout<<p[i]<<" ";
    }

    cout<<endl;
    
    delete []p;
}