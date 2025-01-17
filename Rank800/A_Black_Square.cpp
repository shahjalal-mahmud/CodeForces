#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    string s;
    cin >> s;
    int sum = 0;
    for (char ch : s)
    {
        int c = ch - '1';
        sum += arr[c];
    }
    cout << sum;
    return 0;
}