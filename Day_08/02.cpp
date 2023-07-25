#include <iostream>
using namespace std;

int StringLength(string str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    return length;
}

int main() {
    string str = "Hello, World!";
    int length = StringLength(str);
    
    cout << "Length of the string: " << length << endl;

    return 0;
}
