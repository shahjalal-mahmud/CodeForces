#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a, b, c, x, y;
    int temp1, temp2;
    while (n--)
    {
        cin >> a >> b >> c >> x >> y;
        if (a >= x && b >= y)
        {
            cout << "YES" << endl;
        }
        else if (a < x && b >= y)
        {
            if (x - a <= c)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else if (b < y && a >= x)
        {
            if (y - b <= c)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else if (a < x && b < y)
        {
            if ((x - a) + (y - b) <= c)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}