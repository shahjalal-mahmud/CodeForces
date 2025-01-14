#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // Print the top half of the pattern
    for (int i = 1; i <= n; i++)
    {
        // Print spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        // Move to the next line
        cout << endl;
    }

    // Print the bottom half of the pattern
    for (int i = n; i >= 1; i--)
    {
        // Print spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        // Move to the next line
        cout << endl;
    }
    return 0;
}