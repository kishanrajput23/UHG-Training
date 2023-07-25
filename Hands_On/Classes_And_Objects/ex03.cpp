#include<iostream>
using namespace std;

class room {
    public:
    int length, breadth, height;

    int calculateArea() {
        return length*breadth;
    }

    int calculateVolume() {
        return length*breadth*height;
    }

};

int main() {

    room r1;
    r1.length = 22;
    r1.breadth = 25;
    r1.height = 28;

    cout<<"The area of the room is : "<<r1.calculateArea()<<endl;
    cout<<"The volume of the room is : "<<r1.calculateVolume()<<endl;


    return 0;
}