#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> distance(3);
    cin >> distance[0] >> distance[1] >> distance[2];
    sort(distance.begin(), distance.end());
    int result = (distance[1] - distance[0]) + (distance[2] - distance[1]);
    cout << result;
    return 0;
}