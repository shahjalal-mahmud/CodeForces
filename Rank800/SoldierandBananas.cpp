#include <iostream>
using namespace std;
int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int borrow = 0;
    int price = 0;
    for (int i = 1; i <= w; i++)
    {
        price += (i * k);
    }
    if (n < price)
    {
        borrow = price - n;
        cout << borrow;
    }
    else
    {
        cout << 0;
    }
    return 0;
}