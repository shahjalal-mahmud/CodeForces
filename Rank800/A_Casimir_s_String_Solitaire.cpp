#include <iostream>
#include <string>
using namespace std;

bool canEraseString(const string& s) {
    int countA = 0, countB = 0, countC = 0;
    for (char ch : s) {
        if (ch == 'A') countA++;
        else if (ch == 'B') countB++;
        else if (ch == 'C') countC++;
    }
    // Check if the number of B's is equal to the sum of A's and C's
    // and if the total number of characters is even
    return (countB == countA + countC) && (s.length() % 2 == 0);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (canEraseString(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}