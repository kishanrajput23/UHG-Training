#include <iostream>
using namespace std;

class NumberAdder {
    private:
    int num1, num2;

    public:
    NumberAdder(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }

    int calculateSum() {
        return num1 + num2;
    }
};

int main() {
    int num1, num2;
    
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    NumberAdder adder(num1, num2);
    int sum = adder.calculateSum();

    cout << "Sum of the two numbers: " << sum << endl;

    return 0;
}
