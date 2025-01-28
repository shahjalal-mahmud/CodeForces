#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        int count = 1;
        int result = -1;

        for (int i = 1; i < n; i++) {
            if (v[i] == v[i - 1]) {
                count++;
                if (count == 3) {
                    result = v[i];
                    break;
                }
            } else {
                count = 1;
            }
        }

        cout << result << endl;
    }

    return 0;
}
