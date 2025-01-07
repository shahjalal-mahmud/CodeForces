#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m = 2;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
    }
    int count = 0, result = 0;
    for (int i = 0; i < n; i++)
    {
        count = (count - arr[i][0]) + arr[i][1];
        if (count > result)
        {
            result = count;
        }
    }
    cout << result;

    return 0;
}