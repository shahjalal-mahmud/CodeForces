#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Handle base cases
    if (n == 1) {
        cout << 0 << endl;
        return 0;
    }
    if (n == 2) {
        cout << 1 << endl;
        return 0;
    }

    // Iterative approach (Bottom-up)
    long long prev1 = 1, prev2 = 0, current;
    for (int i = 3; i <= n; i++) {
        current = prev1 + prev2; // Fibonacci formula
        prev2 = prev1;          // Update previous values
        prev1 = current;
    }

    cout << current << endl; // Output the Fibonacci number for N
    return 0;
}
