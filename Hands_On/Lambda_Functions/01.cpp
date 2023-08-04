#include <iostream>

using namespace std;

int main() {
    // create a lambda function that prints "Hello World!"

    auto greet = []() {
    cout<<"Hello World!"<<endl;
    };
    
    // call Lambda function
    greet ();
    
    return 0;
}