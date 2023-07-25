#include <iostream>
using namespace std;

class Rectangle {
    private:
    double length;
    double width;

    public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    double calculateArea() {
        return length * width;
    }
};

int main() {
    Rectangle rect(4.5, 3.2);
    double area = rect.calculateArea();

    cout << "Area of the rectangle : " << area << endl;

    return 0;
}
