#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases
    while (t--) {
        int n, m;
        cin >> n >> m;  // Read n and m (m is always 1)
        
        vector<int> a(n);
        int b1;  // There is only one element in b, call it b1
        for (int i = 0; i < n; i++) {
            cin >> a[i];  // Read the elements of a
        }
        cin >> b1;  // Read the single element of b
        
        bool possible = true;  // Assume the transformation is possible
        
        // Check if the array is already sorted
        for (int i = 1; i < n; i++) {
            if (a[i] < a[i - 1]) {  // If the array is not sorted
                // Check if we can transform a[i] or a[i-1] to make the array sorted
                int transformed_a_i = b1 - a[i];  // Transformation for a[i]
                int transformed_a_i_1 = b1 - a[i - 1];  // Transformation for a[i-1]
                
                // We need to check if we can make the array sorted by applying the transformation
                if (!(a[i] <= a[i - 1] || transformed_a_i <= a[i - 1] || a[i] <= transformed_a_i_1 || transformed_a_i <= transformed_a_i_1)) {
                    possible = false;  // If none of the cases work, sorting is not possible
                    break;
                }
            }
        }
        
        if (possible) {
            cout << "YES" << endl;  // The array can be sorted
        } else {
            cout << "NO" << endl;  // The array cannot be sorted
        }
    }
    return 0;
}
