#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Function to find the mirrored string
string getMirroredString(const string &a) {
    string b = a;
    reverse(b.begin(), b.end()); // Reverse the string
    
    // Replace 'p' with 'q' and vice versa
    for (char &ch : b) {
        if (ch == 'p') ch = 'q';
        else if (ch == 'q') ch = 'p';
    }
    return b;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string a;
        cin >> a;
        cout << getMirroredString(a) << endl;
    }
    
    return 0;
}