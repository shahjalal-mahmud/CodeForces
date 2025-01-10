#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int max = 0;
    int min = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > arr[max])
        {
            max = i;
        }
        if (arr[i] <= arr[min])
        {
            min = i;
        }
    }
    int result = (max-1)+(n-min);
    if (max>min)
    {
        result--;
    }
    cout<<result;
    return 0;
}