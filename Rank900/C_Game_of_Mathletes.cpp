#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> x(n);
    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++) {
        cin >> x[i];
        freq[x[i]]++; // Count occurrences
    }

    int score = 0;
    for (auto &p : freq) {
        int num = p.first;
        int complement = k - num;

        if (freq.find(complement) != freq.end()) {
            if (num == complement) {  // Special case: pairs of the same number (e.g., 2+2=4)
                score += freq[num] / 2;
            } else {
                int pairs = min(freq[num], freq[complement]);
                score += pairs;
                freq[num] -= pairs;
                freq[complement] -= pairs;
            }
        }
    }
    
    cout << score << endl;
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
