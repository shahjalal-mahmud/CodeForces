#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> v(n);
    unordered_map<int, int> freq;

    for (int &x : v) {
        cin >> x;
        freq[x]++;
    }

    for (int i = 1; i <= m; i++) {
        cout << freq[i] << endl;
    }

    return 0;
}
