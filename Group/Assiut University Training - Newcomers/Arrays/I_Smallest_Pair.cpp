#include <iostream>
#include <vector>
#include <climits>
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

        int min_val = INT_MAX; 
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) { 
                int temp = v[i] + v[j] + (j + 1) - (i + 1);
                min_val = min(min_val, temp);
            }
        }

        cout << min_val << endl; 
    }

    return 0;
}
