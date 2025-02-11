#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;  // Read the size of the string
    string S;
    cin >> S;  // Read the string S

    // Variable to store the size of the subsequence
    int subsequence_length = 1; // Start with the first character
    char prev_char = S[0]; // Initialize the previous character as the first one

    // Traverse the string from the second character onwards
    for (int i = 1; i < N; i++) {
        if (S[i] != prev_char) {
            subsequence_length++;
            prev_char = S[i]; // Update prev_char to the current one
        }
    }

    // Output the result
    cout << subsequence_length << endl;

    return 0;
}
