#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> vec1(n);
        vector<int> vec2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> vec2[i];
        }
        sort(vec1.begin(), vec1.end());
        sort(vec2.rbegin(), vec2.rend());
        for (int i = 0; i < n; i++)
        {
            if (vec1[i] < vec2[i] && k > 0)
            {
                vec1[i] = vec2[i];
                k--;
            }
        }
        int sum = 0;
        for (int i : vec1)
        {
            sum += i;
        }
        cout << sum << endl;
    }

    return 0;
}