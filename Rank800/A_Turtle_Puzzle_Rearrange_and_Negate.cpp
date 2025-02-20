#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int Sum(int n, vector<int>& a) {
    sort(a.begin(), a.end());

    int maxSum = 0;
    int currentSum = 0;
    int bestSum = 0;
    
    for (int i = 0; i < n; ++i) {
        currentSum += a[i];
        if (-currentSum > bestSum) {
            bestSum = -currentSum;
        }
    }
    
    maxSum = currentSum + 2 * bestSum;
    
    return maxSum;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        int result = Sum(n, a);
        cout << result << endl;
    }
    
    return 0;
}