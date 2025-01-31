#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int maxQuality = -1, winnerIndex = -1;

    for (int i = 1; i <= n; i++) {
        int ai, bi;
        cin >> ai >> bi;
        
        if (ai <= 10 && bi > maxQuality) {
            maxQuality = bi;
            winnerIndex = i;
        }
    }

    cout << winnerIndex << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
