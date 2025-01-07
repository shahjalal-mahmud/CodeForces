#include <iostream>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    int m = 0;
    while (m != t)
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B' && i != n - 1 && s[i + 1] == 'G')
            {
                char temp = s[i];
                s[i] = s[i + 1];
                s[i + 1] = temp;
                i++;
            }
        }
        ++m;
    }
    cout << s;
    return 0;
}