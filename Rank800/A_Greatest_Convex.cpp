#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long k;
        cin >> k;
        long long fact = 1; // Store factorial modulo k
        bool found = false;

        for (long long x = k - 1; x >= 2; x--) {
            fact = (fact * x) % k; // Compute x! % k
            if (fact == 0) break;  // Stop if factorial becomes 0 mod k
            
            // Compute (x-1)! using fact / x
            long long fact_minus_1 = fact / x; // This works as fact = x * (x-1)!
            if ((fact + fact_minus_1) % k == 0) {
                cout << x << endl;
                found = true;
                break;
            }
        }

        if (!found) cout << "-1" << endl;
    }
    return 0;
}
