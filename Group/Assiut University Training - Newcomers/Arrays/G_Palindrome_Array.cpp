#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isPalindrom(const vector<int> &v)
{
    return equal(v.begin(), v.begin() + v.size() / 2, v.rbegin());
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (isPalindrom(v))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}