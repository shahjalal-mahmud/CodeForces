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
        vector<int> v(n);
        for (size_t i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int min = v[0];
        for (size_t i = 0; i < n; i++)
        {
            if (min > v[i])
            {
                min = v[i];
            }
        }
        long long sum = 0;
        for (size_t i = 0; i < n; i++)
        {
            sum += v[i] - min;
        }
        cout<<sum<<endl;
    }

    return 0;
}