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
        if (v[i] <= 10)
        {
            cout << "A[" << i << "] = " << v[i] << endl;
        }
    }

    return 0;
}