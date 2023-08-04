#include <iostream>
#include <thread>
using namespace std;

void foo(int Z) {
    for (int i=0; i<Z; i++){
        cout << "Thread using function pointer as callable\n";
    }
}
    
    // A callable object
class thread_obj {
    public:
    void operator()(int x) {
        for (int i=0; i<x; i++){
            cout << "Thread using function object as callable\n";
        }
    }
};

int main() {
    cout<< "Threads 1 and 2 and 3 operating independently" << endl;

    // This thread is launched by using
    // fundtion pointer as callable
    thread th1(foo, 3);

    // This thread is launched by using
    // function object as callable
    thread th2(thread_obj(), 3);
    
    return 0;
}