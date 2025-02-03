#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<string> v(10);
        int points = 0;
        for (int i = 0; i < 10; i++)
        {
            cin >> v[i];
        }
        for (size_t i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (i == 0 || i == 9 || j == 0 || j == 9)
                {
                    if (v[i][j] == 'X')
                    {
                        points++;
                    }
                }
                else if (i == 1 || i == 8 || j == 1 || j == 8)
                {
                    if (v[i][j] == 'X')
                    {
                        points += 2;
                    }
                }
                else if (i == 2 || i == 7 || j == 2 || j == 7)
                {
                    if (v[i][j] == 'X')
                    {
                        points += 3;
                    }
                }
                else if (i == 3 || i == 6 || j == 3 || j == 6)
                {
                    if (v[i][j] == 'X')
                    {
                        points += 4;
                    }
                }
                else if (i == 3 || i == 6 || j == 3 || j == 6)
                {
                    if (v[i][j] == 'X')
                    {
                        points += 4;
                    }
                }
                else if (i == 4 || i == 5 || j == 4 || j == 5)
                {
                    if (v[i][j] == 'X')
                    {
                        points += 5;
                    }
                }
            }
        }
        cout << points << endl;
    }

    return 0;
}