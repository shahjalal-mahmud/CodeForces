#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int lastDigit(int n)
{
    return n % 10;
}
int digit(int n)
{
    int count = 0;
    while (n > 0)
    {
        n /= 10;
        count++;
    }
    return count;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int result = 0;
        result = (lastDigit(x) - 1) * 10;
        result += (digit(x) * (digit(x) + 1))/2;
        cout << result << endl;
    }

    return 0;
}