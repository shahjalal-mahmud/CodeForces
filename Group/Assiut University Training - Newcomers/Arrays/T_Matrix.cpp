#include <iostream>
#include <cmath> // For abs() function
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int primarySum = 0, secondarySum = 0;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int value;
            cin >> value;

            if (i == j) primarySum += value; // Primary diagonal
            if (i + j == N - 1) secondarySum += value; // Secondary diagonal
        }
    }
    
    cout << abs(primarySum - secondarySum) << endl; // Absolute difference
    return 0;
}
