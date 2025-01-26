#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    ;
    int min = INT_MAX;
    int index = 0;
    for (size_t i = 0; i < n; i++)
    {
        cin >> v[i];
        if (min > v[i])
        {
            min = v[i];
            index = i;
        }
    }
    cout << min << " " << index + 1 << endl;
    return 0;
}