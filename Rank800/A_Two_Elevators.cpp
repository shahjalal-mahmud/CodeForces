#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int d = abs(b-c);
        int r = d + c;
        if (a == r)
        {
            cout << 3 << endl;
        }
        else if (a > r)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }

    return 0;
}