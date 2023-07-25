#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double r, double i) {
        real = r;
        imaginary = i;
    }

    Complex add(Complex c) {
        double sumReal = real + c.real;
        double sumImaginary = imaginary + c.imaginary;
        return Complex(sumReal, sumImaginary);
    }

    void display() {
        cout << "Real Part: " << real << endl;
        cout << "Imaginary Part: " << imaginary << endl;
    }
};

int main() {
    double real1, imaginary1;
    double real2, imaginary2;

    cout << "Enter the real part of the first complex number: ";
    cin >> real1;
    cout << "Enter the imaginary part of the first complex number: ";
    cin >> imaginary1;

    cout << "Enter the real part of the second complex number: ";
    cin >> real2;
    cout << "Enter the imaginary part of the second complex number: ";
    cin >> imaginary2;

    Complex num1(real1, imaginary1);
    Complex num2(real2, imaginary2);

    Complex sum = num1.add(num2);

    cout << "Sum of the complex numbers:" << endl;
    sum.display();

    return 0;
}
