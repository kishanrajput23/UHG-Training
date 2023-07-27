#include<iostream>
using namespace std;

template <class X, int size>

class sample {
    X arr[size];
    public:
    void input() {
        for (int i=0; i<size; i++) {
            arr[i] = i+1;
        }
    }

    void output() {
        for (int i=0; i<size; i++) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};


int main() {
    sample <int, 10> s1;
    s1.input();
    s1.output();
    return 0;
}