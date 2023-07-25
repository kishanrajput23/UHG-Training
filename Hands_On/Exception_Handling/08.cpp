#include<iostream>
#include<exception>

using namespace std;

class MyException:public exception {
    public:
    const char* what() const throw() {
        return "Attempt to divide by zero.";
    }
};

int main() {
    
    int x=10, y=0;

    try {
        if (y==0) {
            MyException x;
            throw x;
        }
    }
    catch (exception &e) {
        cout<<e.what();
    }
    return 0;
}