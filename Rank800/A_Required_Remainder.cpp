#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, n;
        cin >> x >> y >> n;

        int k = n - (n % x); // Largest multiple of x <= n
        if (k + y <= n) {
            k += y;
        } else {
            k -= x - y;
        }

        cout << k << endl;
    }

    return 0;
}
