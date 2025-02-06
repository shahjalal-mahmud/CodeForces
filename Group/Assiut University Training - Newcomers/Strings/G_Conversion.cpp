#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string s;
    cin >> s; 

    for (char &ch : s) { 
        if (ch == ',') {
            ch = ' ';
        } else if (isupper(ch)) {
            ch = tolower(ch); 
        } else if (islower(ch)) {
            ch = toupper(ch);
        }
    }

    cout << s << endl;
    return 0;
}
