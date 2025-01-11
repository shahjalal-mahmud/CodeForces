#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> roundNumbers; // Store the round numbers
        int place = 1; // Current place value (1, 10, 100, ...)

        while (n > 0) {
            int digit = n % 10; // Extract the last digit
            if (digit != 0) {
                roundNumbers.push_back(digit * place); // Add the round number
            }
            n /= 10;      // Remove the last digit
            place *= 10;  // Move to the next place value
        }

        // Output the result
        cout << roundNumbers.size() << endl; // Number of round numbers
        for (int num : roundNumbers) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
