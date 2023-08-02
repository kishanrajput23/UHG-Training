#include <iostream>

using namespace std;

class Shape {
    public:
    virtual double area() = 0;
    virtual double perimeter() = 0;
};

class Circle : public Shape {
    double radius;

    public:
    Circle(double r){
        radius = r;
    }

    double area() override {
        return 3.14 * radius * radius;
    }

    double perimeter() override {
        return 2 * 3.14 * radius;
    }
};

class Rectangle : public Shape {
    double length;
    double width;

    public:
    Rectangle(double l, double w){
        length = l;
        width = w;
    }

    double area() override {
        return length * width;
    }

    double perimeter() override {
        return 2 * (length + width);
    }
};

class Triangle : public Shape {
    double side1, side2, side3; 

    public:
    Triangle(double s1, double s2, double s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    double area() override {
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    double perimeter() override {
        return side1 + side2 + side3;
    }
};

int main() {
    Circle cir(5);
    Rectangle rect(10, 20);
    Triangle tri(10, 10, 10);

    cout << "Circle Area: " << cir.area() << endl;
    cout << "Circle Perimeter: " << cir.perimeter() << endl;
    
    cout << endl << "Rectangle Area: " << rect.area() << endl;
    cout << "Rectangle Perimeter: " << rect.perimeter() << endl;

    cout << endl << "Triangle Area: " << tri.area() << endl;
    cout << "Triangle Perimeter: " << tri.perimeter() << endl;

    return 0;
}
