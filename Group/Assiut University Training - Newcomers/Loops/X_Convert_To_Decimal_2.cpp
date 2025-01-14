#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases

    while (T--) {
        unsigned int N;
        cin >> N;

        // Convert N to binary and count the number of 1s
        int countOnes = __builtin_popcount(N); // Built-in function to count the 1s in binary

        // Form a binary number with 'countOnes' 1s
        unsigned int result = (1U << countOnes) - 1;

        // Output the result
        cout << result << endl;
    }

    return 0;
}
