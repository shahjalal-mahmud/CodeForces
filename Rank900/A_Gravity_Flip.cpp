#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> result(n);
    for (int i = 0; i < n; i++)
    {
        cin >> result[i];
    }
    sort(result.begin(), result.end());
    for (int i : result)
    {
        cout << i << " ";
    }

    return 0;
}