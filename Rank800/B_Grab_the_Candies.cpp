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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        int sum1 = 0, sum2 = 0;
        bool turn = true;
        for (int i = 0; i < n; i++)
        {
            if (turn)
            {
                if (a[i] % 2 == 0)
                {
                    sum1 += a[i];
                }
                else{
                    sum2 += a[i];
                }
                turn = false;
            }
            else
            {
                if (a[i] % 2 != 0)
                {
                    sum2 += a[i];
                }else{
                    sum1 += a[i];
                }
            }
        }
        if (sum1 > sum2)
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