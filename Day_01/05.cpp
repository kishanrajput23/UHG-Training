#include <iostream>
using namespace std;

bool checkEven(int num) {
    return !(num & 1);
}

int main() {
    int a;

    cout<<"Enter a number : ";
    cin>>a;

    bool check = checkEven(a);
    
    cout << "The given number is " << (check ? "even.":"not even.") << endl;
    
    return 0;
}
