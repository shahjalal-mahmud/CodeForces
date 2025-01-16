#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> programmers, mathematicians, sportsmen;
    int skill;

    // Categorize students by their skill
    for (int i = 1; i <= n; i++) {
        cin >> skill;
        if (skill == 1)
            programmers.push_back(i);
        else if (skill == 2)
            mathematicians.push_back(i);
        else if (skill == 3)
            sportsmen.push_back(i);
    }

    // Find the maximum number of teams
    int max_teams = min({programmers.size(), mathematicians.size(), sportsmen.size()});
    cout << max_teams << endl;

    // Form and print the teams
    for (int i = 0; i < max_teams; i++) {
        cout << programmers[i] << " " << mathematicians[i] << " " << sportsmen[i] << endl;
    }

    return 0;
}
