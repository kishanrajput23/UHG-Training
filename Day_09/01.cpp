#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> splitSentenceIntoWords(string sentence) {
    vector<string> words;
    string word;
    
    for (char c : sentence) {
        if (c == ' ' || c == ',' || c == '\t' || c == '\n') {
            if (!word.empty()) {
                words.push_back(word);
                word.clear();
            }
        } 
        else {
            word += c;
        }
    }
    
    if (!word.empty()) {
        words.push_back(word);
    }
    
    return words;
}

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    
    vector<string> words = splitSentenceIntoWords(sentence);
    
    cout << "Words: " << endl;
    for (string word : words) {
        cout << word << endl;
    }
    
    return 0;
}
