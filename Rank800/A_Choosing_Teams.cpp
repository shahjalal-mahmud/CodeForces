#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> vec(n);
    int player = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        if (5 - vec[i] >= k)
        {
            player++;
        }
    }
    int team = player / 3;

    cout << team;
    return 0;
}
