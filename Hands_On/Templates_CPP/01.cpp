#include <iostream>

using namespace std;

template <typename T>
T add(T x, T y) {
    return x+y;
}

int main()
{
    int i=3, j=2;
    float m=3.5, n=4.5;
    string x="ab", y="cd";
    
    cout<<add<int>(i,j)<<endl;
    cout<<add<float>(m,n)<<endl;
    cout<<add<string>(x,y)<<endl;
    return 0;
}
