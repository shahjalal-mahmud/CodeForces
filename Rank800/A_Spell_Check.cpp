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
        string timur = "Timur";
        sort(timur.begin(), timur.end());
        if (n != 5)
        {
            cout << "NO" << endl;
        }
        else
        {
            sort(s.begin(), s.end());
            if (s == timur)
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