#include<iostream>
using namespace std;

class room {
    int length, breadth, height;
    public:
    
    void setData(int l, int b, int h) {
        length = l;
        breadth = b;
        height = h;
    }

    int calculateArea() {
        return length*breadth;
    }

    int calculateVolume() {
        return length*breadth*height;
    }

};

int main() {

    room r1;
    r1.setData(10, 10, 10);

    cout<<"The area of the room is : "<<r1.calculateArea()<<endl;
    cout<<"The volume of the room is : "<<r1.calculateVolume()<<endl;


    return 0;
}