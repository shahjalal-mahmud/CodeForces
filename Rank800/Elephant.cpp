#include <iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int count = 0;
    while (x != 0)
    {
        if (x >= 5)
        {
            count += (x / 5);
            x = x % 5;
        }
        else if (x >= 4)
        {
            count += (x / 4);
            x = x % 4;
        }
        else if (x >= 3)
        {
            count += (x / 3);
            x = x % 3;
        }
        else if (x >= 2)
        {
            count += (x / 2);
            x = x % 2;
        }
        else
        {
            x = x % 1;
            count++;
        }
    }
    cout<<count;
    return 0;
}