#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;
    
    string target = "hello";
    int targetIndex = 0;
    
    // Traverse the string S to find "hello" as a subsequence
    for (char c : S) {
        if (c == target[targetIndex]) {
            targetIndex++;
        }
        if (targetIndex == target.length()) {
            break;  // Found all characters of "hello"
        }
    }
    
    if (targetIndex == target.length()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
