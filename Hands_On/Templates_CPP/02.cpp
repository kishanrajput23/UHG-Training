#include <iostream>
using namespace std;


template <class T1,class T2=float>
T2 Add (T1 x, T2 y) {
    return x+y;
}

int main() {
    int i=2, j=3;
    float m=3.5, n=7.5;
    
    cout<<Add<int>(i,i)<<endl;
    cout<<Add<float>(m,n)<<endl;

    return 0;
}