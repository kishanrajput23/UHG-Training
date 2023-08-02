#include <iostream>

using namespace std;

class Triangle {
    double side1, side2, side3;

    public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    bool isEquilateral() {
        return side1 == side2 && side2 == side3;
    }

    bool isIsosceles() {
        return side1 == side2 || side1 == side3 || side2 == side3;
    }

    bool isScalene() {
        return side1 != side2 && side1 != side3 && side2 != side3;
    }
};

int main() {
    double s1, s2, s3;
    cout<<"Enter the lengths of the three sides of the triangle: ";
    cin >> s1 >> s2 >> s3;

    Triangle triangle(s1, s2, s3);

    if (triangle.isEquilateral()) {
        cout<<"The triangle is Equilateral."<< endl;
    } 
    else if (triangle.isIsosceles()) {
        cout<<"The triangle is Isosceles."<< endl;
    }
    else {
        cout<<"The triangle is Scalene."<<endl;
    }

    return 0;
}
