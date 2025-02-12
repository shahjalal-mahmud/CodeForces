#include <iostream>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, n;
        cin >> a >> b >> n;
        int steps = 0;
        while (max(a, b) <= n) {
            if (a > b) swap(a, b); // Ensure `a` is always the smaller one
            a += b;
            steps++;
        }
        cout << steps << endl;
    }
}

int main() {
    solve();
    return 0;
}
