#include <iostream>
using namespace std;

int main() {
    while (true) {
        int N, M;
        cin >> N >> M;

        // Terminate if any number is <= 0
        if (N <= 0 || M <= 0) {
            break;
        }

        // Ensure range is from min(N, M) to max(N, M)
        int start = min(N, M);
        int end = max(N, M);

        // Output numbers and calculate sum
        int sum = 0;
        for (int i = start; i <= end; i++) {
            cout << i << " ";
            sum += i;
        }

        // Print the sum
        cout << "sum =" << sum << endl;
    }

    return 0;
}
