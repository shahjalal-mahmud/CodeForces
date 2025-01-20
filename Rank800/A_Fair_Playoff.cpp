#include <iostream>
#include <vector>
#include <algorithm> // For max and sort
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int s1, s2, s3, s4;
        cin >> s1 >> s2 >> s3 >> s4;

        int winner1 = max(s1, s2);
        int winner2 = max(s3, s4);

        vector<int> skills = {s1, s2, s3, s4};
        sort(skills.rbegin(), skills.rend());

        if ((winner1 == skills[0] || winner1 == skills[1]) &&
            (winner2 == skills[0] || winner2 == skills[1])) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
