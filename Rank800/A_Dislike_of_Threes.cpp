#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n; 

        int count = 0, value = 1;

        while (true)
        {
            if (value % 3 != 0 && value % 10 != 3)
            {
                count++;
                if (count == n)
                {
                    cout << value << endl;
                    break;
                }
            }
            value++;
        }
    }

    return 0;
}
