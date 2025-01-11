#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long s;
    long long count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s <= 2)
        {
            count = 0;
        }
        else if (s % 2 == 0)
        {
            count = (s / 2) - 1;
        }
        else
        {
            count = (s - 1) / 2;
        }

        cout << count<<endl;
    }

    return 0;
}