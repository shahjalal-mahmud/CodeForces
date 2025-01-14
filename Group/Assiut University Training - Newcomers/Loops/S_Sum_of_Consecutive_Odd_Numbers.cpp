#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int sum = 0;
        int m = max(a, b);
        int mi = min(a, b);
        for (int i = mi+1; i < m; i++)
        {
            if (i % 2 != 0)
            {
                sum += i;
            }
        }
        cout << sum << endl;
    }

    return 0;
}