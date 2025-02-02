#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, Q;
    cin >> N >> Q;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Step 1: Sort the array
    sort(A.begin(), A.end());

    // Step 2: Process each query
    while (Q--) {
        int X;
        cin >> X;

        // Step 3: Use binary search
        if (binary_search(A.begin(), A.end(), X)) {
            cout << "found\n";
        } else {
            cout << "not found\n";
        }
    }

    return 0;
}
