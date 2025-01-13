#include <iostream>
using namespace std;

void printDigits(int n) {
    if (n == 0) { 
        cout << "0" << endl; // Special case for 0
        return;
    }
    
    while (n > 0) {
        cout << n % 10 << " "; // Print the last digit
        n = n / 10; // Remove the last digit
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n; // Number of test cases
    while (n--) {
        int num;
        cin >> num;
        printDigits(num);
    }

    return 0;
}
