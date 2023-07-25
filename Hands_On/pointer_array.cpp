#include<iostream>
using namespace std;

class Array {
    int *ptr;
    int size;
    
    public:
    Array(int *p=NULL, int s=0) {
        size = s;
        ptr = NULL;

        if(s!=0) {
            ptr = new int[s];
            for (int i=0; i<s; i++) {
                ptr[i] = p[i];
            }
        }
    }

    int& operator [](int index) {
        if (index >= size) {
            cout<<"Out of bond"<<endl;
            exit(0);
        }
        return ptr[index];
    } 

    void print() {
        for (int i=0; i<size; i++) {
            cout<<ptr[i]<<" ";
        }
        cout<<endl;
    }
};

int main() {

    int a[] = {1,3,5,7,};
    Array arr1(a, 4);
    arr1.print();
    arr1[2] = 10;
    arr1.print();
    arr1[5] = 20;

    return 0;
}