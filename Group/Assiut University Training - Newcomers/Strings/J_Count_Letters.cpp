#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    string S;
    cin >> S;
    
    map<char, int> freq;
    for (char c : S) {
        freq[c]++;
    }
    
    for (const auto &pair : freq) {
        cout << pair.first << " : " << pair.second << endl;
    }
    
    return 0;
}
