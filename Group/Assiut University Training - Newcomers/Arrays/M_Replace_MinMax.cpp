#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    auto min = min_element(v.begin(), v.end());
    auto max = max_element(v.begin(), v.end());
    swap(*min, *max);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}