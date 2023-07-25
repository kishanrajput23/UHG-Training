#include <iostream>
using namespace std;

bool isPatternFound(string searchStr, string patternStr) {
    int searchLen = searchStr.length();
    int patternLen = patternStr.length();

    
    for (int i=0; i<=searchLen-patternLen; i++) {
        int j;
        for (j=0; j<patternLen; j++) {
            if (searchStr[i + j] != patternStr[j]) {
                break;
            }
        }
        // If the pattern string is found, return true
        if (j == patternLen) {
            return true;
        }
    }

    return false;
}

int main() {
    string searchStr, patternStr;

    cout<<"Enter a search string : ";
    getline(cin, searchStr);

    cout<<"Enter a pattern string : ";
    getline(cin, patternStr);

    bool patternFound = isPatternFound(searchStr, patternStr);
    
    if (patternFound) {
        cout << "Pattern found in the search string." << endl;
    } else {
        cout << "Pattern not found in the search string." << endl;
    }

    return 0;
}
