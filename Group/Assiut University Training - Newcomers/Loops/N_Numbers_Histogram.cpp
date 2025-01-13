#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s;
    int n;
    cin >> s >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        for (int j = 0; j < arr[i]; j++)
        {
            cout << s;
        }
        cout << endl;
    }

    return 0;
}