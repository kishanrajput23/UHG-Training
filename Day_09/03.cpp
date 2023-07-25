#include <iostream>
#include <cctype>  
#include <string>

using namespace std;

void countCharacters(const string& text, int& uppercase, int& lowercase, int& digits, int& spaces, int& punctuation) {
    uppercase = 0;
    lowercase = 0;
    digits = 0;
    spaces = 0;
    punctuation = 0;

    for (char c : text) {
        if (isupper(c)) {
            uppercase++;
        }
        else if (islower(c)) {
            lowercase++;
        }
        else if (isdigit(c)) {
            digits++;
        }
        else if (isspace(c)) {
            spaces++;
        }
        else if (ispunct(c)) {
            punctuation++;
        }
    }
}

int main() {
    string text;
    cout << "Enter a text: ";
    getline(cin, text);

    int uppercase, lowercase, digits, spaces, punctuation;
    countCharacters(text, uppercase, lowercase, digits, spaces, punctuation);

    cout << "Number of Uppercase Letters: " << uppercase << endl;
    cout << "Number of Lowercase Letters: " << lowercase << endl;
    cout << "Number of Digits: " << digits << endl;
    cout << "Number of Spaces: " << spaces << endl;
    cout << "Number of Punctuation Characters: " << punctuation << endl;

    return 0;
}
