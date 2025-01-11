#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // Create the snake pattern row by row
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 1) {
            // Odd rows: all '#'
            for (int j = 1; j <= m; ++j) {
                cout << '#';
            }
        } else {
            // Even rows
            if ((i / 2) % 2 == 1) {
                // First even-row pattern: `..#`
                for (int j = 1; j < m; ++j) {
                    cout << '.';
                }
                cout << '#';
            } else {
                // Second even-row pattern: `#..`
                cout << '#';
                for (int j = 2; j <= m; ++j) {
                    cout << '.';
                }
            }
        }
        cout << endl; // Move to the next line after finishing a row
    }

    return 0;
}
