#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int h, m;
        cin >> h >> m;
        int hleft = 23 - h;
        int mleft = 60 - m;
        int result = (hleft * 60) + mleft;
        cout << result << endl;
    }

    return 0;
}