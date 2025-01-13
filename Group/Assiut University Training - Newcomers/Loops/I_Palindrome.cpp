#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int original = n; // Store the original value of n
    int reverse = 0;

    while (n != 0) {
        int lastDigit = n % 10; // Get the last digit
        reverse = reverse * 10 + lastDigit; // Build the reversed number
        n = n / 10; // Remove the last digit
    }

    cout << reverse << endl;

    if (reverse == original) {
        cout << "YES"; // Palindrome
    } else {
        cout << "NO"; // Not a palindrome
    }

    return 0;
}
