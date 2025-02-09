#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        string result;

        for (char c : s) {
            if (!result.empty() && result.back() == c) {
                result.pop_back(); // Remove last character if it matches
            } else {
                result.push_back(c); // Otherwise, add current character
            }
        }

        cout << result.length() << endl;
    }
    return 0;
}
