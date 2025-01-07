#include <iostream>
using namespace std;
int main()
{
    int arr[4];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];

    // Check if intervals [arr[0], arr[1]] and [arr[2], arr[3]] overlap
    if (arr[1] >= arr[2] && arr[3] >= arr[0]) {
        // Calculate the overlap interval
        int overlapStart = max(arr[0], arr[2]);
        int overlapEnd = min(arr[1], arr[3]);
        cout << overlapStart << " " << overlapEnd;
    } else {
        // No overlap
        cout << -1;
    }

    return 0;
}
