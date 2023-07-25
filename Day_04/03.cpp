#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
    string name;
    int age;

public:
    void set_value(string animalName, int animalAge) {
        name = animalName;
        age = animalAge;
    }
};

class Zebra : public Animal {
public:
    void display() {
        cout << "Zebra Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Place of Origin: Africa" << endl;
    }
};

class Dolphin : public Animal {
public:
    void display() {
        cout << "Dolphin Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Place of Origin: Oceans" << endl;
    }
};

int main() {
    Zebra zebra;
    zebra.set_value("Stripes", 5);
    zebra.display();

    cout << endl;

    Dolphin dolphin;
    dolphin.set_value("Flipper", 10);
    dolphin.display();

    return 0;
}
