#include <iostream>
using namespace std;

void printCheckerboard(int n) {
    for (int i = 0; i < 2 * n; ++i) {
        for (int j = 0; j < 2 * n; ++j) {
            // Determine if the current 2x2 block should be '##' or '..'
            if ((i / 2 + j / 2) % 2 == 0) {
                cout << '#';
            } else {
                cout << '.';
            }
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        printCheckerboard(n);
    }
    return 0;
}