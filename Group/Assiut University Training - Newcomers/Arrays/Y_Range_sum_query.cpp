#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    
    vector<long long> A(N + 1, 0);  // 1-based indexing
    vector<long long> prefix(N + 1, 0);

    // Read array and compute prefix sum
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
        prefix[i] = prefix[i - 1] + A[i];
    }

    // Process each query
    while (Q--) {
        int L, R;
        cin >> L >> R;
        cout << prefix[R] - prefix[L - 1] << endl;  // Efficient sum calculation
    }

    return 0;
}
