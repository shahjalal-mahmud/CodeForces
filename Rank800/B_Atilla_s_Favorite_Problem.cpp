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
        int max = 1;
        for (char c : s)
        {
            int temp = c - 'a' + 1;
            if (max < temp)
            {
                max = temp;
            }
        }
        cout << max << endl;
    }

    return 0;
}