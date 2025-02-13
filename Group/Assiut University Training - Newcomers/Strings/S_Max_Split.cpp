#include <iostream>
#include <vector>

using namespace std;

void maxSplitBalancedStrings(string &S) {
    int balance = 0, count = 0;
    vector<string> result;
    string current = "";

    for (char c : S) {
        current += c;
        balance += (c == 'L') ? 1 : -1;

        if (balance == 0) {  // Found a balanced substring
            result.push_back(current);
            current = "";
            count++;
        }
    }

    // Print results
    cout << count << endl;
    for (const string &s : result) {
        cout << s << endl;
    }
}

int main() {
    string S;
    cin >> S;

    maxSplitBalancedStrings(S);

    return 0;
}
