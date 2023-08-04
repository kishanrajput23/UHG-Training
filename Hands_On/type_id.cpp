#include<iostream>

using namespace std;

int main() {
    int i, j; 
    char c;
    // Get the type info using typeid operator
    const type_info& til = typeid(i);
    const type_info& ti2 = typeid(j);
    const type_info& ti3 = typeid(c);

    // Check if Goth types are same
    if (til == ti2) {
        cout << "i and j are of similar type" << endl;
    }
    else {
        cout << "¡ and j are of different type" << endl;
    }
    // Check if both types are same
    if (ti2 == ti3) {
        cout << "j and c are of similar type" << endl;
    }
    else {
        cout << "¡ and c are of different type" << endl;
    }
    return 0;
}