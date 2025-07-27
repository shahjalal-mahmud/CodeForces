#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;
        cout << (char)tolower(s1[0]) << (char)tolower(s2[0]) << (char)tolower(s3[0]) << '\n';
    }
    return 0;
}
