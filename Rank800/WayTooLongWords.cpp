#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string arr[n];
    if (n >= 1 && n <= 100)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        int temp = arr[i].length();
        if (temp <= 10)
        {
            cout << arr[i] << endl;
        }
        else
        {
            cout << arr[i][0] << temp-2 << arr[i][temp - 1] << endl;
        }
    }
    return 0;
}