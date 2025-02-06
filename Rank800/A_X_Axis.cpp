#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;

        int arr[] = {x1, x2, x3};
        sort(arr, arr + 3);
        
        int a = arr[1];
        int result = abs(arr[0] - a) + abs(arr[1] - a) + abs(arr[2] - a);
        
        cout << result << endl;
    }
    return 0;
}
