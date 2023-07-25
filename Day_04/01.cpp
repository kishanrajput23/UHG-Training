#include <iostream>
using namespace std;


class Shape {
protected:
    double width;
    double height;

public:
    Shape(double w, double h) {
        width = w;
        height = h;
    }

    virtual double area() {
        return 0.0;
    }
};

class Triangle : public Shape {
public:
    Triangle(double w, double h) : Shape(w, h) {}

    double area() {
        return 0.5 * width * height;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(double w, double h) : Shape(w, h) {}

    double area() {
        return width * height;
    }
};

int main() {
    Triangle triangle(4.0, 3.0);
    Rectangle rectangle(5.0, 2.5);

    double triangleArea = triangle.area();
    double rectangleArea = rectangle.area();

    cout << "Area of the triangle: " << triangleArea << endl;
    cout << "Area of the rectangle: " << rectangleArea << endl;

    return 0;
}
