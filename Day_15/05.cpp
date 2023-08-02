#include <iostream>
using namespace std;

class Shape {
   protected:
    float side;

   public:
   virtual float calculateArea() = 0;

    void getDimension() {
        cin >> side;
    }
};

class Square : public Shape {
   public:
    float calculateArea() {
        return side * side;
    }
};

class Sphere : public Shape {
   public:
    float calculateArea() {
        return 4 * 3.14 * side * side;
    }
};

int main() {
    Square square;
    Sphere sphere;

    cout << "Enter the length of the square: ";
    square.getDimension();
    cout << "Area of square: " << square.calculateArea() << endl;

    cout << "\nEnter radius of the sphere: ";
    sphere.getDimension();
    cout << "Area of sphere: " << sphere.calculateArea() << endl;

    return 0;
}