#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int temp1 = a % 10;
    a = a / 10;
    int temp2 = a % 10;
    if (temp1 % temp2 == 0 || temp2 % temp1 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}