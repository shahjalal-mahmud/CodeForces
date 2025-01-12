#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, r;
    cin >> k >> r;
    bool result = false;
    int count = 1;
    while (!result)
    {
        if (count * k % 10 == 0 || count * k % 10 == r)
        {
            result = true;
        }
        count++;
    }
    cout<<count-1;
    return 0;
}