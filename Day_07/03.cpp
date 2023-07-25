#include <iostream>
using namespace std;

int decimalToOctal(int decimal) {
    int octal = 0;
    int place = 1;

    while (decimal != 0) {
        octal += (decimal % 8) * place;
        decimal /= 8;
        place *= 10;
    }

    return octal;
}

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    int octal = decimalToOctal(decimal);
    cout << "Octal representation: " << octal << endl;

    return 0;
}
