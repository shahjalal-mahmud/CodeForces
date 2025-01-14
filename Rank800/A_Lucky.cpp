#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int sum1 = 0, sum2 = 0;
        int i = 1;
        for (char ch : s)
        {
            int n = ch - '0';
            if (i <= 3)
            {
                sum1 += n;
            }
            else
            {
                sum2 += n;
            }
            i++;
        }
        if (sum1 == sum2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}