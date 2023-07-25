#include <iostream>
#include <string>

using namespace std;

string removeDuplicateSpaces(string sentence) {
    string result;
    bool spaceDetected = false;

    for (char c : sentence) {
        if (c == ' ') {
            if (!spaceDetected) {
                result += c;
                spaceDetected = true;
            }
        }
        else {
            result += c;
            spaceDetected = false;
        }
    }

    return result;
}

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    string result = removeDuplicateSpaces(sentence);

    cout << "Modified Sentence: " << result << endl;

    return 0;
}