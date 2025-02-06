#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<int> b;

        int left = 0, right = n - 1;
        while (left <= right) {
            b.push_back(a[left++]);
            if (left <= right) {
                b.push_back(a[right--]);
            }
        }

        for (int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
