#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> v(2);
        cin >> v[0] >> v[1];

        bool flag = true;
        for (size_t i = 0; i < v[0].length(); i++)
        {
            if (v[0][i] != v[1][i])
            {
                if (!((v[0][i] == 'G' && v[1][i] == 'B') || (v[0][i] == 'B' && v[1][i] == 'G')))
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
