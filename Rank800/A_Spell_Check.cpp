#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (n != 5)
        {
            cout << "NO" << endl;
        }
        else
        {
            sort(s.begin(), s.end());
            if (s[0] == 'i' && s[1] == 'm' && s[2] == 'r' && s[3] == 'T' && s[4] == 'u')
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}