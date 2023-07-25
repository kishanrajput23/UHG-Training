#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int StringToInt(string str) {
    stringstream ss(str);
    int number;
    ss >> number;
    return number;
}

int main() {
    string n;
    cout << "Enter a number in string format: ";
    cin >> n;

    int num = StringToInt(n);
    cout << "Output Integer: " << num << endl;

    return 0;
}
