#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long l, r;
        cin >> l >> r;

        long long diff = r - l;
        long long left = 1, right = 1e5, result = 1;

        while (left <= right) {
            long long mid = left + (right - left) / 2;
            if (mid * (mid - 1) / 2 <= diff) {
                result = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        cout << result << endl;
    }

    return 0;
}
