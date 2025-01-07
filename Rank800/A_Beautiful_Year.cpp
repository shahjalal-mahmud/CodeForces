#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool areDistinct(int n)
{
    string num = to_string(n);
    sort(num.begin(), num.end());
    return unique(num.begin(), num.end()) == num.end();
}
int main()
{
    int y;
    cin >> y;
    do
    {
        y++; // Increment to the next number
    } while (!areDistinct(y)); // Continue until a number with distinct digits is found
    cout << y;
    return 0;
}