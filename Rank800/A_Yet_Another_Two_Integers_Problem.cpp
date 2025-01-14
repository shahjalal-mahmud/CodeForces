#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        
        int dif = abs(a - b); // Absolute difference between a and b
        int count = 0;

        // Use steps from 10 to 1 to minimize the difference
        for (int step = 10; step >= 1; --step)
        {
            count += dif / step; // Number of steps of size 'step'
            dif %= step;         // Remaining difference
        }

        cout << count << endl;
    }

    return 0;
}
