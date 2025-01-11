#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> permutation;

        // Generate the first half of the permutation
        for (int i = k; i <= n; i++)
        {
            permutation.push_back(i);
        }
        // Add the second half to complete the permutation
        for (int i = 1; i < k; i++)
        {
            permutation.push_back(i);
        }

        // Output the permutation
        for (int i = 0; i < n; i++)
        {
            cout << permutation[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
