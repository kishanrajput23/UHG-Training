#include <iostream>

using namespace std;
int main() {

    char a='X', b='Y';
    
    char *ptr = &a;
    cout<<*ptr<<endl;

    ptr=&b;
    cout<<*ptr<<endl;

    *ptr='Z';
    cout<<*ptr<<endl;
    
    return 0;
}
