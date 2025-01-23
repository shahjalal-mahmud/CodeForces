#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int step = 0;
    char position = 'a'; // Start at 'a'

    for (size_t i = 0; i < s.length(); i++)
    {
        int clockwise_distance = abs(s[i] - position);
        int counterclockwise_distance = 26 - clockwise_distance;

        // Add the minimum of the two distances
        step += min(clockwise_distance, counterclockwise_distance);

        // Update position to the current character
        position = s[i];
    }

    cout << step << endl;

    return 0;
}
