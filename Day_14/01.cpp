#include<iostream>
using namespace std;

int ValidString(string s) {
    int hash_count = 0;
    int astrick_count = 0;

    for (char c : s) {
        if (c == '#') {
            hash_count++;
        }
        if (c == '*') {
            astrick_count++;
        }
    }

    if (hash_count == astrick_count) {
        return 0;
    }
    else if (hash_count>astrick_count) {
        return -1;
    }
    else {
        return 1;
    }
}

int main() {
    string s;
    cout<<"Enter a string consisting of '*' and '#' : ";
    cin>>s;

    cout<<ValidString(s)<<endl;

    return 0;
}