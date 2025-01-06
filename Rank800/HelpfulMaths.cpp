#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    int n = s.size();
    if (n == 1)
    {
        cout << s;
    }
    else
    {
        for (int i = 0, j = (n - 1) / 2; i < (n - 1) / 2, j < n; i++, j++)
        {
            cout << s[j];
            if (i != (n - 1) / 2)
            {
                cout << s[i];
            }
        }
    }
    return 0;
}