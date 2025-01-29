#include <iostream>
using namespace std;

int countOrdinaryNumbers(int n) {
    int count = 0;

    // Generate all ordinary numbers
    for (int d = 1; d <= 9; d++) { // Digits 1 through 9
        long long ordinary = d;   // Start with a single-digit ordinary number
        while (ordinary <= n) {   // Generate larger ordinary numbers
            count++;
            ordinary = ordinary * 10 + d; // Extend the number (e.g., 1 -> 11 -> 111)
        }
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << countOrdinaryNumbers(n) << endl;
    }

    return 0;
}
