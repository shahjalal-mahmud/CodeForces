#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string c = "codeforces";
    while (t--)
    {
        string s;
        cin >> s;
        int count = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != c[i])
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}