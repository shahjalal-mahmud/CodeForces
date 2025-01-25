#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int x;
    cin >> x;
    int index = 0;
    bool found = false;
    for (size_t i = 0; i < n; i++)
    {
        if (x == v[i])
        {
            index = i;
            found = true;
            break;
        }
    }
    if (found)
    {
        cout << index << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}