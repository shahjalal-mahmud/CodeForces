#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n, m;
        cin >> n >> m; // Park dimensions

        // Calculate the minimum number of lanterns
        int lanterns = (n * m + 1) / 2;

        cout << lanterns << endl;
    }

    return 0;
}