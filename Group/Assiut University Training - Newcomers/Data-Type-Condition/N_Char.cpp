#include <iostream>
using namespace std;
int main()
{
    char x;
    cin >> x;
    int temp = (int)x;
    if (temp >= 65 && temp <= 90)
    {
        temp = temp + 32;
        cout << (char)temp;
    }
    else
    {
        temp = temp - 32;
        cout << (char)temp;
    }
    return 0;
}