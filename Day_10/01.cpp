#include<iostream>
using namespace std;

void validParenthesis(string expression) {

    int count = 0;

    for (char s : expression) {
        if (s == '(') {
            count++;
        }
        else if (s == ' ' || s == ',' || s == '\t' || s == '\n') {
            continue;
        }
        else {
            count--;
        }
    }

    if (count == 0) {
        cout<<"Valid"<<endl;
    }
    else {
        cout<<"invalid"<<endl;
    }
}

int main() {
    string s;
    cout<<"Enter a parenthesis pattern : ";
    getline(cin, s);

    validParenthesis(s);

    return 0;
}