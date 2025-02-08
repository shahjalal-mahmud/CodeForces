#include <iostream>
#include <string>
using namespace std;

void checkString(const string &s) {
    if (s.find("010") != string::npos || s.find("101") != string::npos) {
        cout << "Good" << endl;
    } else {
        cout << "Bad" << endl;
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string S;
        cin >> S;
        checkString(S);
    }
    return 0;
}
