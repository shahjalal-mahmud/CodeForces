#include <iostream>
#include <sstream>
using namespace std;

// Function to reverse a word in-place
void reverseWord(string &s, int start, int end) {
    while (start < end) {
        swap(s[start], s[end]);
        start++;
        end--;
    }
}

int main() {
    string S;
    getline(cin, S);  // Read full input line

    int n = S.size();
    int start = 0;  // Start index of a word

    for (int i = 0; i <= n; i++) {
        if (i == n || S[i] == ' ') {  // End of a word or end of string
            reverseWord(S, start, i - 1);
            start = i + 1;  // Move to the next word
        }
    }

    cout << S << endl;
    return 0;
}
