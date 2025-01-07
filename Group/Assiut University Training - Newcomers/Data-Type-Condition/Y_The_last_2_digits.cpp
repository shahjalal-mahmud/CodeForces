#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    // Compute the product modulo 100 at each step
    long long result = 1;
    result = (result * a) % 100;
    result = (result * b) % 100;
    result = (result * c) % 100;
    result = (result * d) % 100;

    // Print the last two digits with leading zero if necessary
    if (result < 10)
        cout << "0" << result;
    else
        cout << result;

    return 0;
}
