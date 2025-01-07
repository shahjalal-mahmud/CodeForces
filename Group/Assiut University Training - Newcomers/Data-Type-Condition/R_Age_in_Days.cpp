#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int y = 0, m = 0, d = 0;
    if (n >= 365)
    {
        y = n / 365;
        n = n % 365;
    }
    if (n >= 30)
    {
        m = n / 30;
        n = n % 30;
    }
    if (n < 30)
    {
        d = n;
    }
    cout << y << " years" << endl;
    cout << m << " months" << endl;
    cout << d << " days" << endl;

    return 0;
}