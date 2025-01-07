#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double n;
    cin >> n;
    if (n == trunc(n))
    {
        cout << "int " << trunc(n);
    }
    else
    {
        cout << "float " << trunc(n) << " " << n - trunc(n);
    }

    return 0;
}