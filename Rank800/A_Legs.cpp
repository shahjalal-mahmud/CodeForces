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
        int count = 0;
        count = n / 4;
        n = n % 4;
        count += n / 2;
        cout << count << endl;
    }

    return 0;
}