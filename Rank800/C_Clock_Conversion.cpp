#include <iostream>
#include <string>
using namespace std;

string convertTo12HourFormat(const string& time24) {
    int hh = stoi(time24.substr(0, 2));
    string mm = time24.substr(3, 2);
    string period = (hh < 12) ? "AM" : "PM";
    
    if (hh == 0) hh = 12;
    else if (hh > 12) hh -= 12;
    
    return (hh < 10 ? "0" : "") + to_string(hh) + ":" + mm + " " + period;
}

void solve() {
    string s;
    cin >> s;
    cout << convertTo12HourFormat(s) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
