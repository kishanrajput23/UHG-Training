#include <iostream>
#include <assert.h>
using namespace std;

int main() {
    int x = 10;
    cout<<x<<" "<<&x<<endl;
    
    
    int *mem = new (&x) int(20);
    cout<<x<<" "<<&x<<endl;
    
    
    return 0;
}
