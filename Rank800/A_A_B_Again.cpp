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
        int result = (n % 10);
        n /= 10;
        result += n % 10;
        cout << result << endl;
    }

    return 0;
}