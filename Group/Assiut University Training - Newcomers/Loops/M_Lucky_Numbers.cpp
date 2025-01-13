#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isLucky(int n)
{
    int digit;
    while (n > 0)
    {
        digit = n % 10;
        if (digit != 4 && digit != 7)
        {
            return false;
        }
        n = n / 10;
    }
    return true;
}
int main()
{
    int a, b;
    cin >> a >> b;
    bool result = false;
    for (int i = a; i <= b; i++)
    {
        if (isLucky(i))
        {
            cout << i << " ";
            result = true;
        }
    }
    if (!result)
    {
        cout << -1;
    }

    return 0;
}