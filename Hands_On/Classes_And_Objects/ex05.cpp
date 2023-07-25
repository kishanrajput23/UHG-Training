#include<iostream>
using namespace std;

class binary {
    public:
    string bin;

    void readBinary() {
        cout<<"Enter a binary number : ";
        cin>>bin;
    }

    void checkBinary() {
        for (int i=0; i<bin.length(); i++) {
            if (bin.at(i) != '0' && bin.at(i) != '1') {
                cout<<"Incorrect Binary Format"<<endl;
                exit(0);
            }
        }
    }

    void onesComplement() {
        for (int i=0; i<bin.length(); i++) {
            if (bin.at(i) == '0') {
                bin.at(i) = '1';
            }
            else {
                bin.at(i) = '0';
            }
        }
    }

    void displayBinary() {
        for (int i=0; i<bin.length(); i++) {
            cout<<bin.at(i);
        }
        cout<<endl;
    }

};

int main() {

    binary b;
    b.readBinary();
    b.checkBinary();

    cout<<"Displaying binary before 1's complement"<<endl;
    b.displayBinary();

    b.onesComplement();

    cout<<"Displaying binary after 1's complement"<<endl;
    b.displayBinary();


    return 0;
}