#include <iostream>

using namespace std;

int main() {
    // lambda function that takes two integer parameter
    // also displays its sum
    
    auto add = [] (int a, int b) {
        cout<<"Sum : "<<a+b;
    };
    
    add(2,4);
    
    return 0;
}