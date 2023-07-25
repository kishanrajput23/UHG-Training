#include <iostream>

using namespace std;

int main() {
    int a=10, c=200;
    
    int *b = &a;
    cout<<*b<<endl;
    
    *b=20;      // means a=20;
    cout<<*b<<" "<<a<<endl;

    b=&c;
    cout<<*b<<endl;

    *b=300;
    cout<<*b<<endl;

    return 0;
}