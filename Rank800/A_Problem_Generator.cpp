#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    string a;
    cin >> a;
    
    unordered_map<char, int> freq;
    for (char c : a) {
        freq[c]++;
    }
    
    int missing = 0;
    string levels = "ABCDEFG";
    
    for (char c : levels) {
        if (freq[c] < m) {
            missing += (m - freq[c]);
        }
    }
    
    cout << missing << "\n";
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
