#include <iostream>
#include <vector>
using namespace std;

long long countNonDecreasingSubarrays(const vector<int>& arr) {
    long long count = 0;
    int n = arr.size();
    long long length = 1; // Start with a single element

    for (int i = 1; i < n; i++) {
        if (arr[i] >= arr[i - 1]) {
            // Continue the non-decreasing subarray
            length++;
        } else {
            // Add all subarrays from the current segment
            count += (length * (length + 1)) / 2;
            length = 1; // Reset for the next segment
        }
    }

    // Add the last segment
    count += (length * (length + 1)) / 2;

    return count;
}

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        cout << countNonDecreasingSubarrays(arr) << endl;
    }

    return 0;
}
