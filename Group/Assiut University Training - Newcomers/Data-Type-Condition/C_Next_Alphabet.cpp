#include <iostream>
using namespace std;
int main()
{
    char ch;
    cin >> ch;
    int temp = (int)ch;
    if (temp == 122)
    {
        temp = 97;
    }
    else
    {
        temp++;
    }
    cout << (char)temp;
    return 0;
}