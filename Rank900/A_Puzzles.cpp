#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> f(m);
    
    for (int i = 0; i < m; i++) {
        cin >> f[i];
    }
    
    sort(f.begin(), f.end());
    int min_diff = INT_MAX;
    
    for (int i = 0; i <= m - n; i++) {
        min_diff = min(min_diff, f[i + n - 1] - f[i]);
    }
    
    cout << min_diff << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1; // Only one test case
    while (t--) {
        solve();
    }
    
    return 0;
}
