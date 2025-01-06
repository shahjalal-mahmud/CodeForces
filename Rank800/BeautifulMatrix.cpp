#include <iostream>
using namespace std;
int main()
{
    int arr[5][5];
    int temp1 = 0, temp2 = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                temp1 = i;
                temp2 = j;
            }
        }
    }
    int count = 0;
    while (temp1 != 2)
    {
        if (temp1 != 2)
        {
            if (temp1 < 2)
            {
                temp1++;
                count++;
            }
            else
            {
                temp1--;
                count++;
            }
        }
    }
    while (temp2 != 2)
    {
        if (temp2 != 2)
        {
            if (temp2 < 2)
            {
                temp2++;
                count++;
            }
            else
            {
                temp2--;
                count++;
            }
        }
    }
    cout << count;
    return 0;
}