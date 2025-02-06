#include <iostream>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        long long l, r;
        cin >> l >> r;

        if (2 * l <= r) {
            cout << l << " " << 2 * l << endl;
        } else {
            cout << "-1 -1" << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
