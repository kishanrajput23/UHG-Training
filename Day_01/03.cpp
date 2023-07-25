#include <iostream>
using namespace std;

bool checkEqual(int num1, int num2) {
    return !(num1^num2);
}

int main() {
    int a, b;

    cout<<"Enter the numbers : ";
    cin>>a>>b;

    bool check = checkEqual(a, b);
    
    cout << "The given numbers are " << (check ? "equal.":"not equal.") << endl;
    
    return 0;
}
