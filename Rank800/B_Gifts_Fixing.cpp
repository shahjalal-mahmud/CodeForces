#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    int min_candies = *min_element(a.begin(), a.end());
    int min_oranges = *min_element(b.begin(), b.end());

    long long total_moves = 0;

    for (int i = 0; i < n; i++) {
        int candy_moves = a[i] - min_candies;
        int orange_moves = b[i] - min_oranges;
        total_moves += max(candy_moves, orange_moves);
    }

    cout << total_moves << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
