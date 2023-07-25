#include<iostream>
using namespace std;

class sample {
    int a = 10;

    friend int& operator <<(ostream&, sample&); 
};

int& operator <<(ostream& ct, sample& s) {
    cout<<"stream insertion operartor overloading"<<endl;
    return s.a;
}

int main() {

    sample s1;
    int a;
    a = cout<<s1;
    cout<<a<<endl;

    return 0;
}