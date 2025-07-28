#include <iostream>
#include <string>
using namespace std;

int solve() {
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
    
    int op = 0;
    while (x.size() < 100) {
        if (x.find(s) != string::npos) {
            return op;
        }
        x += x;
        op++;
    }
    if (x.find(s) != string::npos) {
        return op;
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << '\n';
    }
    
    return 0;
}