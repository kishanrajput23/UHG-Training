#include <iostream>
using namespace std;

class Mother {
public:
    void display() {
        cout << "I am the mother." << endl;
    }
};

class Daughter : public Mother {
public:
    void display() {
        cout << "I am the daughter." << endl;
    }
};

int main() {
    Daughter daughter;
    daughter.display();

    return 0;
}
