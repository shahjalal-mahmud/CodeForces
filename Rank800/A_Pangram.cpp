#include <iostream>
#include <unordered_set>
#include <cctype>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n >> s;
    unordered_set<char> uniqueChar;
    if (n < 26)
    {
        cout << "NO";
    }
    else
    {

        for (char ch : s)
        {
            ch = tolower(ch);
            if (ch >= 'a' && ch <= 'z')
            {
                uniqueChar.insert(ch);
            }
        }
        if (uniqueChar.size() == 26)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    return 0;
}