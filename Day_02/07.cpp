#include <iostream>
using namespace std;

#define N 10
 
int main() {
    static int i = 0;
    if (i++ < N) {
        cout << i << " ";
        main();
    }
 
    return 0;
}