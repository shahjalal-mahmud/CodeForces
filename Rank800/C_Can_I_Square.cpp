#include <iostream>
#include <cmath>
using namespace std;

bool isPerfectSquare(long long n) {
    long long x = sqrt(n); 
    return x * x == n; 
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            sum += num;
        }

        cout << (isPerfectSquare(sum) ? "YES" : "NO") << endl;
    }

    return 0;
}
