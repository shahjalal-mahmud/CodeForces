#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        int maxVal = *max_element(vec.begin(), vec.end());
        int minVal = *min_element(vec.begin(), vec.end());
        cout << maxVal - minVal << endl;
    }

    return 0;
}
