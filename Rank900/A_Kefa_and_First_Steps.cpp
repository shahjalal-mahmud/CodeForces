#include<iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n; // Input size of array
    vector<int> money(n);

    // Input array values
    for (int i = 0; i < n; i++) {
        cin >> money[i];
    }

    int count = 1, maxCount = 1; // At least one element is part of a sequence
    for (int i = 1; i < n; i++) {
        if (money[i] >= money[i - 1]) {
            count++;
            maxCount = max(maxCount, count); // Update the maximum length
        } else {
            count = 1; // Reset count if sequence breaks
        }
    }

    cout << maxCount; // Output the longest non-decreasing sequence length
    return 0;
}
