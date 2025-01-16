#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int win = 0;
    int loss = 0;
    int draw = 0;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        if (a > b)
        {
            win++;
        }
        else if (b > a)
        {
            loss++;
        }
        else
        {
            draw++;
        }
    }
    if (win > loss)
    {
        cout << "Mishka";
    }
    else if (loss > win)
    {
        cout << "Chris";
    }
    else
    {
        cout << "Friendship is magic!^^";
    }

    return 0;
}