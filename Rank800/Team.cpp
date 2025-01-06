#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    // cout << "Enter a number: ";
    cin >> n;

    // Using a 2D vector to store the array
    vector<vector<int>> arr(n, vector<int>(3));

    // Input elements
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // cout << "Enter element for (" << i + 1 << "," << j + 1 << "): ";
            cin >> arr[i][j];
        }
    }

    int result = 0;

    // Process the input and calculate the result
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == 1)
            {
                count++;
            }
        }
        if (count >= 2)
        {
            result++;
        }
    }

    // Output the 2D array
    // cout << "Array contents:\n";
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // Output the result
    // cout << "Result: ";
    cout<< result;

    return 0;
}
