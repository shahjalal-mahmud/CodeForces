#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;  // Number of test cases

    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        vector<int> results;

        // Generate all subarrays
        for (int i = 0; i < N; i++) {
            int max_val = A[i];
            for (int j = i; j < N; j++) {
                max_val = max(max_val, A[j]);
                results.push_back(max_val);
            }
        }

        // Print the results (order does not matter)
        for (int num : results) {
            cout << num << " ";
        }
        cout << "\n";
    }

    return 0;
}
