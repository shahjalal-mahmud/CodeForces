#include <iostream>
#include <bits/stdc++.h>
bool sumDigits(int n, int a, int b)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    if (sum >= a && sum <= b)
    {
        return true;
    }
    return false;
}
using namespace std;
int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (sumDigits(i, a, b))
        {
            sum += i;
        }
    }
    cout << sum;
    return 0;
}