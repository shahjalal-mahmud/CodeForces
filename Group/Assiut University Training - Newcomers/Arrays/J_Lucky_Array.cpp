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
    int min = *min_element(v.begin(), v.end());
    int count = 0;
    for (int i : v)
    {
        if (min == i)
        {
            count++;
        }
    }
    if (count % 2 == 0)
    {
        cout << "Unlucky" << endl;
    }
    else
    {
        cout << "Lucky" << endl;
    }

    return 0;
}