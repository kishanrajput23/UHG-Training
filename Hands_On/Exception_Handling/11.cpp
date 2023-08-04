#include <iostream>
using namespace std;

int main() {
    try {
        long int* myarray = new long int[5000000000];
    }
    catch(bad_alloc& bad) {
        cerr<<"Caught : "<<bad.what()<<endl;
    }
    
    return 0;
}
