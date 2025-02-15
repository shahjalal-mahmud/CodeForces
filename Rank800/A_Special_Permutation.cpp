#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> permutation(n);

        // Fill the permutation with 1 to n
        for (int i = 0; i < n; ++i) {
            permutation[i] = i + 1;
        }

        // Rotate the permutation by one position
        for (int i = 1; i < n; ++i) {
            cout << permutation[i] << " ";
        }
        cout << permutation[0] << endl;
    }

    return 0;
}
