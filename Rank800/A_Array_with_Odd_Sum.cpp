#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    int sum = 0, odd_count = 0, even_count = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        if (a[i] % 2 == 0)
            even_count++;
        else
            odd_count++;
    }
    
    if (sum % 2 == 1) {
        cout << "YES" << endl;
    } else {
        if (odd_count > 0 && even_count > 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
