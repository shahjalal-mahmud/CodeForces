#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

void checkTasks(int t) {
    while (t--) {
        int n;
        cin >> n;
        string tasks;
        cin >> tasks;

        unordered_set<char> seen;
        char prev = '\0';
        bool suspicious = false;

        for (char task : tasks) {
            if (task != prev) {
                if (seen.count(task)) {
                    suspicious = true;
                    break;
                }
                seen.insert(task);
            }
            prev = task;
        }

        cout << (suspicious ? "NO" : "YES") << endl;
    }
}

int main() {
    int t;
    cin >> t;
    checkTasks(t);
    return 0;
}
