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
        int max = 0, result = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
            {
                max++;
                if (result < max)
                {
                    result = max;
                }
            }
            else
            {
                max = 0;
            }
        }
        cout << result<< endl;
    }

    return 0;
}