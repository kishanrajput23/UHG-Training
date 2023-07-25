#include <iostream>

using namespace std;

int main() {

    char a='X', b='Y';

    const char *const ptr = &a;
    cout<<*ptr<<endl;

    // ptr = &b;
    // cout<<*ptr<<endl;        // throws an error as ptr is constant

    // *ptr='Z';
    // cout<<*ptr<<endl;        // throws an error as ptr char is also constant
    
    return 0;
}
