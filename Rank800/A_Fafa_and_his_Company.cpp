#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int count = 0;
    
    // Find the number of ways to choose team leaders
    for (int l = 1; l < n; ++l) {
        if (n % l == 0) {
            count++;
        }
    }
    
    cout << count << endl;
    return 0;
}
