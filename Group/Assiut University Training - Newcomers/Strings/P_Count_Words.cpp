#include <iostream>
#include <cctype>

using namespace std;

int countWords(const string &s) {
    int wordCount = 0;
    bool inWord = false;

    for (char c : s) {
        if (isalpha(c)) {  // Check if character is a letter
            if (!inWord) {  // Start of a new word
                wordCount++;
                inWord = true;
            }
        } else {
            inWord = false; // End of a word when encountering space or punctuation
        }
    }

    return wordCount;
}

int main() {
    string S;
    getline(cin, S);  // Read entire input line

    cout << countWords(S) << endl; // Print word count

    return 0;
}
