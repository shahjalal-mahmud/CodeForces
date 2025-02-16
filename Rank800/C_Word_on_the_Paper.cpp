#include <iostream>
#include <vector>
using namespace std;

string extractWord(const vector<string>& grid) {
    // Iterate through each column
    for (int col = 0; col < 8; ++col) {
        string word;
        // Iterate through each row in the column
        for (int row = 0; row < 8; ++row) {
            if (grid[row][col] != '.') {
                word += grid[row][col]; // Append the letter to the word
            }
        }
        if (!word.empty()) {
            return word; // Return the word if found
        }
    }
    return ""; // If no word is found (should not happen as per the problem statement)
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<string> grid(8);
        for (int i = 0; i < 8; ++i) {
            cin >> grid[i]; // Read each row of the grid
        }
        string word = extractWord(grid); // Extract the word
        cout << word << endl; // Output the word
    }
    return 0;
}