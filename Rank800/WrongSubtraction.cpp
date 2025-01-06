#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int lastDigit;
    for (int i = 0; i < k; i++)
    {
        lastDigit = n % 10;
        if (lastDigit != 0)
        {
            n--;
        }
        else
        {
            n = n / 10;
        }
    }
    cout << n;
    return 0;
}