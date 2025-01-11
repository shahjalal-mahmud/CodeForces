#include <iostream>
#include <string>
using namespace std;

int main() {
    string remix;
    cin >> remix;

    string original = "";  // To store the restored original song
    string word = "";      // Temporary string to hold each word
    for (int i = 0; i < remix.length(); i++) {
        if (remix.substr(i, 3) == "WUB") {  // Check if "WUB" is encountered
            if (!word.empty()) {           // If a word is formed, add it to the original song
                if (!original.empty()) {
                    original += " ";       // Add a space if the original song is not empty
                }
                original += word;          // Append the word to the original
                word.clear();              // Clear the word for the next segment
            }
            i += 2;                        // Skip the next two characters as "WUB" is 3 characters long
        } else {
            word += remix[i];              // Add character to the current word
        }
    }

    if (!word.empty()) {                   // Add the last word if present
        if (!original.empty()) {
            original += " ";
        }
        original += word;
    }

    cout << original << endl;              // Output the restored song
    return 0;
}
