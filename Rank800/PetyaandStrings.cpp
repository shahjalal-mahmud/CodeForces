#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;
int main()
{
    string m, n;
    cin >> m;
    cin >> n;
    transform(m.begin(), m.end(), m.begin(), ::tolower);
    transform(n.begin(), n.end(), n.begin(), ::tolower);
    if (m == n)
    {
        cout << 0;
    }
    else if (m < n)
    {
        cout << -1;
    }
    else
    {
        cout << 1;
    }
    return 0;
}