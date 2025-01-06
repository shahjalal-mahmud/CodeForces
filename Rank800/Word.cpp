#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int u = 0, l = 0;
    for (char c : s)
    {
        if (isupper(c))
        {
            u++;
        }
        else
        {
            l++;
        }
    }
    if (u <= l)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    cout << s;
    return 0;
}