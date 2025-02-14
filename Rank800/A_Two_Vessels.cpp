#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c; // Masses of water and cup capacity

        // Calculate the difference
        int difference = abs(a - b);

        // Calculate the minimum number of moves
        int moves = (difference + 2 * c - 1) / (2 * c);

        cout << moves << endl;
    }

    return 0;
}