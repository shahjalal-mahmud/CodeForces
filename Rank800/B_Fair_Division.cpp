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
        vector<int> candy(n);
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> candy[i];
            if (candy[i] == 1)
            {
                sum1++;
            }
            else
            {
                sum2++;
            }
        }
        if (sum1 % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else if (sum2 % 2 != 0 && sum1>0 && sum1 % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else if (sum1 % 2 == 0 && sum2 % 2 == 0)
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