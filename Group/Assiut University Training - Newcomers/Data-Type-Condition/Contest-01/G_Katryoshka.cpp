// Unsolved

#include <iostream>
#include <algorithm>
using namespace std;

long long maxKatryoshkas(long long n, long long m, long long k) {
    // First, let's handle the combination with 2 eyes and 1 body.
    long long katryoshkas = 0;

    // First, make as many as possible from the "2 eyes + 1 body" combination
    long long first_combo = min(n / 2, k);
    katryoshkas += first_combo;
    n -= first_combo * 2;  // reduce the number of eyes
    k -= first_combo;      // reduce the number of bodies

    // Then, make as many as possible from the "2 eyes + 1 mouth + 1 body" combination
    long long second_combo = min(min(n / 2, m), k);
    katryoshkas += second_combo;
    n -= second_combo * 2;  // reduce the number of eyes
    m -= second_combo;      // reduce the number of mouths
    k -= second_combo;      // reduce the number of bodies

    // Finally, use the "1 eye + 1 mouth + 1 body" combination with the remaining resources
    long long third_combo = min(min(n, m), k);
    katryoshkas += third_combo;
    
    return katryoshkas;
}

int main() {
    long long n, m, k;
    cin >> n >> m >> k;
    cout << maxKatryoshkas(n, m, k) << endl;
    return 0;
}
