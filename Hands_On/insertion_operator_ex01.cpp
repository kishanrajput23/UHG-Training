#include<iostream>
using namespace std;

class sample {
    int a = 10;
};

ostream& operator <<(ostream& ct, sample & s) {
    cout<<"stream insertion operartor overloading"<<endl;
    return ct;
}

int main() {

    sample s1;
    cout<< s1;

    return 0;
}