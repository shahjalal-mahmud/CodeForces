// Unsolved

#include <iostream>
#include <limits>

using namespace std;

int main() {
    long long n, k, a;
    cin >> n >> k >> a;
    
    // Calculate the product of n^k * a
    long long result = 1;
    for (long long i = 0; i < k; i++) {
        result *= n;
        if (result > numeric_limits<long long>::max() / a) {
            cout << "double" << endl;
            return 0;
        }
    }
    result *= a;
    
    // Check if the result fits in the int range
    if (result >= numeric_limits<int>::min() && result <= numeric_limits<int>::max()) {
        cout << "int" << endl;
    }
    // If the result fits in long long range but not int range
    else if (result >= numeric_limits<long long>::min() && result <= numeric_limits<long long>::max()) {
        cout << "long long" << endl;
    }
    // If the result is larger than the long long range
    else {
        cout << "double" << endl;
    }

    return 0;
}
