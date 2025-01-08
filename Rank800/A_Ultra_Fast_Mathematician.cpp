#include <iostream>
using namespace std;
int main()
{
    string s, p;
    cin >> s >> p;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != p[i])
        {
            cout << "1";
        }
        else
        {
            cout << "0";
        }
    }

    return 0;
}