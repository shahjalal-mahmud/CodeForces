#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> cards(n);
    for (int i = 0; i < n; i++) {
        cin >> cards[i];
    }

    int left = 0, right = n - 1;
    int serejaScore = 0, dimaScore = 0;
    bool serejaTurn = true; // Flag to track whose turn it is

    while (left <= right) {
        if (cards[left] >= cards[right]) {
            if (serejaTurn) {
                serejaScore += cards[left];
            } else {
                dimaScore += cards[left];
            }
            left++; // Remove the leftmost card
        } else {
            if (serejaTurn) {
                serejaScore += cards[right];
            } else {
                dimaScore += cards[right];
            }
            right--; // Remove the rightmost card
        }
        serejaTurn = !serejaTurn; // Switch turns
    }

    cout << serejaScore << " " << dimaScore << endl;
    return 0;
}
