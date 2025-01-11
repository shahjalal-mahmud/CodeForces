#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> coins(n); // Initialize the vector with size n
    int sum = 0;

    // Input coins and calculate their total sum
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
        sum += coins[i];
    }

    // Sort the coins in ascending order
    sort(coins.begin(), coins.end());

    int temp = 0;
    int count = 0;

    // Traverse the sorted array in reverse (largest to smallest)
    for (int i = n - 1; i >= 0; i--) {
        temp += coins[i];
        count++;
        // Stop once we exceed half the total sum
        if (temp > sum / 2) {
            break;
        }
    }
    cout << count << endl;  // Print the result
    return 0;
}
