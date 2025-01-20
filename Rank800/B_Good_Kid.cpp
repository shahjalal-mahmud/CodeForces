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
        vector<int> vec(n);
        int maxProduct = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        auto minimum = min_element(vec.begin(), vec.end());
        int minIndex = distance(vec.begin(), minimum);
        vec[minIndex] = vec[minIndex] + 1;
        for (int i : vec)
        {
            maxProduct *= i;
        }
        cout<<maxProduct<<endl;
    }

    return 0;
}