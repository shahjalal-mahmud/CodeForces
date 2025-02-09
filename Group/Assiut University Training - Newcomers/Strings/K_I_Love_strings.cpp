#include <iostream>
using namespace std;

void mergeStrings(const string& s, const string& t) {
    string result;
    int i = 0, j = 0;
    int lenS = s.length(), lenT = t.length();

    // Merge alternating characters
    while (i < lenS && j < lenT) {
        result += s[i++];
        result += t[j++];
    }

    // Append remaining characters from S or T
    result += s.substr(i) + t.substr(j);

    cout << result << endl;
}

int main() {
    int n;
    cin >> n;

    while (n--) {
        string s, t;
        cin >> s >> t;
        mergeStrings(s, t);
    }

    return 0;
}
