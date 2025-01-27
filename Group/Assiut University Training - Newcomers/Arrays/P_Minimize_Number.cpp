#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n; 
    vector<long long> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int operations = 0;

    while (true) {
        bool allEven = true;

        // Check if all elements are even
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 != 0) { // If any number is odd
                allEven = false;
                break;
            }
        }

        if (!allEven) {
            break; // Stop the process if there is an odd number
        }

        // Divide all numbers by 2
        for (int i = 0; i < n; i++) {
            a[i] /= 2;
        }

        // Increment the operation count
        operations++;
    }

    cout << operations << endl;

    return 0;
}
