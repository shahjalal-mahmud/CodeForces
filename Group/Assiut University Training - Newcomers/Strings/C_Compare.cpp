#include <iostream>
using namespace std;
int main()
{
    string s, p;
    cin >> s >> p;
    for (size_t i = 0; i < 20; i++)
    {
        if (s == p)
        {
            cout<<s<<endl;
            return 0;
        }
        
        if (s[i] < p[i])
        {
            cout << s << endl;
            break;
        }
        else if (s[i] > p[i])
        {
            cout << p << endl;
            break;
        }

    }

    return 0;
}