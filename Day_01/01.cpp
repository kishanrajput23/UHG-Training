#include <iostream>
using namespace std;

int main() {
    int num1=10, num2=15, num3=18;
    
    int largest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
    
    cout << "The largest number is: " << largest << endl;
    
    return 0;
}
