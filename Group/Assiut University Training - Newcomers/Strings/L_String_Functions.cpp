#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    while (q--) {
        string command;
        cin >> command;

        if (command == "pop_back") {
            s.pop_back();
        } 
        else if (command == "front") {
            cout << s.front() << endl;
        } 
        else if (command == "back") {
            cout << s.back() << endl;
        } 
        else if (command == "sort") {
            int l, r;
            cin >> l >> r;
            sort(s.begin() + (l - 1), s.begin() + r);
        } 
        else if (command == "reverse") {
            int l, r;
            cin >> l >> r;
            reverse(s.begin() + (l - 1), s.begin() + r);
        } 
        else if (command == "print") {
            int pos;
            cin >> pos;
            cout << s[pos - 1] << endl;
        } 
        else if (command == "substr") {
            int l, r;
            cin >> l >> r;
            cout << s.substr(l - 1, r - l + 1) << endl;
        } 
        else if (command == "push_back") {
            char x;
            cin >> x;
            s.push_back(x);
        }
    }
    return 0;
}
