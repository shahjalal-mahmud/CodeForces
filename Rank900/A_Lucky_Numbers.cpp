#include <iostream>
using namespace std;

int luckiness(int x) {
    int maxDigit = 0, minDigit = 9;
    while (x) {
        int d = x % 10;
        maxDigit = max(maxDigit, d);
        minDigit = min(minDigit, d);
        x /= 10;
    }
    return maxDigit - minDigit;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;

        int bestNum = l;
        int maxLuck = -1;

        for (int i = l; i <= min(l + 100, r); ++i) {
            int currentLuck = luckiness(i);
            if (currentLuck > maxLuck) {
                maxLuck = currentLuck;
                bestNum = i;
            }
            if (maxLuck == 9) break;
        }

        cout << bestNum << '\n';
    }
    return 0;
}
