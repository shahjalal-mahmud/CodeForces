#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, s;
        cin >> n >> s;
        long long x = s / (n * n);
        cout << x << endl;
    }

    return 0;
}