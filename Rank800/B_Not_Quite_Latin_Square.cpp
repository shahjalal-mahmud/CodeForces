#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<string> v(3);
        cin >> v[0] >> v[1] >> v[2];
        int countA = 0, countB = 0, countC = 0;
        for (size_t i = 0; i < 3; i++)
        {
            for (char c : v[i])
            {
                if (c == 'A')
                {
                    countA++;
                }
                else if (c == 'B')
                {
                    countB++;
                }
                else if (c == 'C')
                {
                    countC++;
                }
            }
        }
        if (countA != 3)
        {
            cout << 'A' << endl;
        }
        else if (countB != 3)
        {
            cout << 'B' << endl;
        }
        else if (countC != 3)
        {
            cout << 'C' << endl;
        }
    }

    return 0;
}