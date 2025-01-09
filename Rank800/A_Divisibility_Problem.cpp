#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        long long remainder = a % b;
        if (remainder == 0) {
            cout << 0 << endl; // No moves needed
        } else {
            cout << b - remainder << endl; // Minimum moves to make a divisible by b
        }
    }

    return 0;
}
