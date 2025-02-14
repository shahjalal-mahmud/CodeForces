#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        cin >> n; // Number of coins

        // Calculate the minimum difference
        int difference = (1 << (n / 2 + 1)) - 2;

        cout << difference << endl;
    }

    return 0;
}