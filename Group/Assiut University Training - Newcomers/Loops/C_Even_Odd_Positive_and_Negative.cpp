#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int even = 0, odd = 0, pos = 0, neg = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if (arr[i] > 0)
        {
            pos++;
        }
        else
        {
            if (arr[i] != 0)
            {
                neg++;
            }
        }
    }
    cout << "Even: " << even << endl
         << "Odd: " << odd << endl
         << "Positive: " << pos << endl
         << "Negative: " << neg << endl;
    return 0;
}