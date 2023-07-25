#include<iostream>
#include<fstream>

using namespace std;

int main() {

    ifstream op;

    op.open("test.txt");

    if (op.is_open()) {
        string line;
        getline(op, line);
        cout<<line<<endl;
    }

    op.close();

    return 0;
}