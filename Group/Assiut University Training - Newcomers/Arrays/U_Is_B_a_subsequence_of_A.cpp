#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int N, M;
    cin >> N >> M;
    
    vector<int> A(N), B(M);
    
    for (int i = 0; i < N; i++) cin >> A[i]; // Read array A
    for (int i = 0; i < M; i++) cin >> B[i]; // Read array B

    int j = 0; // Pointer for B
    for (int i = 0; i < N && j < M; i++) {
        if (A[i] == B[j]) {
            j++; // Move pointer for B if match found
        }
    }

    cout << (j == M ? "YES" : "NO") << endl; // If all elements of B are matched, print YES
}

int main() {
    solve();
    return 0;
}
