#include<iostream>
using namespace std;

int SMA(string s) {
    int count = 0;
    string sc="`~!@#$%^&*() _+{}|<><?[]\;':,./";
    for (char c : s){
        for (char ch : sc) {
            if (c==ch) {
                count++;
            }
        }
    }
    return count;
}

int main() {

    string s;
    cout<<"Enter the encoded string : ";
    getline(cin,s);

    cout<<SMA(s)<<endl;

    return 0;
}