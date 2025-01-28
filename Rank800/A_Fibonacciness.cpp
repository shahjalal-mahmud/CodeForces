#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;

        // Two possible values for a3
        int a3_1 = a4 - a2;
        int a3_2 = a2 + a1;

        // Function to compute Fibonacciness
        auto getFibonacciness = [](int a1, int a2, int a3, int a4, int a5) {
            int count = 0;
            if (a3 == a1 + a2) count++;
            if (a4 == a2 + a3) count++;
            if (a5 == a3 + a4) count++;
            return count;
        };

        // Compute max Fibonacciness for both choices of a3
        int maxFib = max(getFibonacciness(a1, a2, a3_1, a4, a5),
                         getFibonacciness(a1, a2, a3_2, a4, a5));

        cout << maxFib << endl;
    }

    return 0;
}
