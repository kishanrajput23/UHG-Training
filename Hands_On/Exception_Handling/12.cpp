#include <iostream>
using namespace std;
void createArray(long int N) {
    try {
        int* array = new int[N];
        cout<<"Array created successfully of length "<<N<<endl;
    }
    catch(bad_alloc& bad) {
        cerr<<"Caught : "<<bad.what()<<" for length "<<N<<endl;
    }
}

int main() {
    createArray(1000);
    createArray(1000000000000);
    
    return 0;
}
