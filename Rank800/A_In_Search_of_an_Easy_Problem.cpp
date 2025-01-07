#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    bool isHard = false;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            isHard = true;
        }
    }
    if (isHard)
    {
        cout << "HARD";
    }
    else
    {
        cout << "EASY";
    }

    return 0;
}