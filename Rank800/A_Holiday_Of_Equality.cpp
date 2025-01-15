#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        if (max < vec[i])
        {
            max = vec[i];
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + (max - vec[i]);
    }
    cout << sum;
    return 0;
}