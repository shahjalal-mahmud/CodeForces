#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;
        
        // We need to check if the numbers can form a valid solution
        int a = min(x, y);
        int b = min(x, z);
        int c = min(y, z);
        
        // Check if the chosen a, b, c satisfy the conditions
        if (max(a, b) == x && max(a, c) == y && max(b, c) == z) {
            cout << "YES\n";
            cout << a << " " << b << " " << c << "\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}
