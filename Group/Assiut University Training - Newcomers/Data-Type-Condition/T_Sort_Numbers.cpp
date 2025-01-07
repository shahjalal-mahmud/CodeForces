#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int d = a;
    int e = b;
    int f = c;
    if (a > b)
        swap(a, b);
    if (a > c)
        swap(a, c);
    if (b > c)
        swap(b, c);
    cout << a << endl
         << b << endl
         << c << endl <<endl
         << d << endl
         << e << endl
         << f;

    return 0;
}