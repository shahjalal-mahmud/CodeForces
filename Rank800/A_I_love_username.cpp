#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int min_score = arr[0], max_score = arr[0], count = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max_score || arr[i] < min_score)
        {
            count++;
            max_score = max(max_score, arr[i]);
            min_score = min(min_score, arr[i]);
        }
    }

    cout << count << endl;
    return 0;
}
