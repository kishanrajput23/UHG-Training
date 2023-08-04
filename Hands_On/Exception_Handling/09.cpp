#include <iostream>
using namespace std;

void fun(int a, int b) {
    try {
        if (b==0) {
            throw "Division by 0 is not possible";
        }
        cout<<"Ans : "<<a/b<<endl;
    }
    catch(const char* n) {
        cout<<"Caught error in fun"<<endl;
        throw;
    }
}

int main() {
    cout<<"In main function"<<endl;
    try {
        fun(4,0);
    }
    catch(const char* n) {
        cout<<"Caught error in main : "<<n<<endl;
    }
    
    return 0;
}
