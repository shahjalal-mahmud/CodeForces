#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    string S;
    cin >> S;
    
    while (Q--) {
        string query;
        cin >> query;
        
        if (query == "pop_back") {
            // Make sure the string is not empty before popping
            if (!S.empty()) {
                S.pop_back();
            }
        } else if (query == "front") {
            if (!S.empty()) {
                cout << S.front() << endl;
            }
        } else if (query == "back") {
            if (!S.empty()) {
                cout << S.back() << endl;
            }
        } else if (query == "sort") {
            int l, r;
            cin >> l >> r;
            // Convert to 0-based index
            l--; r--;
            if (l >= 0 && r < S.size()) {
                sort(S.begin() + l, S.begin() + r + 1);
            }
        } else if (query == "reverse") {
            int l, r;
            cin >> l >> r;
            // Convert to 0-based index
            l--; r--;
            if (l >= 0 && r < S.size()) {
                reverse(S.begin() + l, S.begin() + r + 1);
            }
        } else if (query == "print") {
            int pos;
            cin >> pos;
            // Convert to 0-based index
            if (pos > 0 && pos <= S.size()) {
                cout << S[pos - 1] << endl;
            }
        } else if (query == "substr") {
            int l, r;
            cin >> l >> r;
            // Convert to 0-based index
            l--; r--;
            if (l >= 0 && r < S.size() && l <= r) {
                cout << S.substr(l, r - l + 1) << endl;
            }
        } else if (query == "push_back") {
            char x;
            cin >> x;
            S.push_back(x);
        }
    }
    
    return 0;
}
