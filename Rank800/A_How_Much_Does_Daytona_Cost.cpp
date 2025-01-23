#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int k_count = 0;
        unordered_map<int, int> freq_diff;
        bool found = false;

        for (int i = 0; i < n; i++) {
            if (a[i] == k) {
                k_count++;
            }

            // Calculate the difference between k's frequency and other numbers
            freq_diff[a[i]]++;
            if (k_count > freq_diff[a[i]] - (a[i] == k ? 1 : 0)) {
                found = true;
                break;
            }
        }

        cout << (found ? "YES" : "NO") << endl;
    }

    return 0;
}
