#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t; // Number of test cases
    while (t--)
    {
        int a, b, c, n;
        cin >> a >> b >> c >> n;

        // Total sum of a, b, c, and n
        int total = a + b + c + n;

        // Check if the total sum is divisible by 3
        if (total % 3 == 0)
        {
            // Each value must equal total / 3
            int target = total / 3;

            // Check if we have enough `n` to reach the target for each value
            if (a <= target && b <= target && c <= target)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
