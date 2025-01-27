#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

bool isNumeric(const string &str) {
    return all_of(str.begin(), str.end(), ::isdigit);
}

int main() {
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;

    // Check if the (A+1)-th character is '-'
    if (s[a] != '-') {
        cout << "No" << endl;
    } else {
        // Split the string into two parts
        string firstPart = s.substr(0, a);       // First A characters
        string secondPart = s.substr(a + 1, b); // Last B characters

        // Check if both parts are numeric
        if (isNumeric(firstPart) && isNumeric(secondPart)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
