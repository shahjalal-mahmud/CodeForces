#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n < 2)
    {
        cout << -1;
    }
    for (int i = 2; i <= n;)
    {
        cout << i << endl;
        i += 2;
    }

    return 0;
}