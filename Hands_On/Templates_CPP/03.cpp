#include<iostream>
using namespace std;

template <class T1, class T2>

T2 Add(T1, T2);

template <class T1, class T2, class T3>
T2 Add(T1, T2, T3);

int main() {

    int i=3, j=2;
    float m=3.5, n=4.5, p=2.5;
    
    cout<<Add<int, int>(i,j)<<endl;
    cout<<Add<float, float, float>(m,n,p)<<endl;

    return 0;
}

template <class T1, class T2>
T2 Add(T1 x, T2 y) {
    return x+y;
}

template <class T1, class T2, class T3>
T2 Add(T1 x, T2 y, T3 z) {
    return x+y+z;
}
