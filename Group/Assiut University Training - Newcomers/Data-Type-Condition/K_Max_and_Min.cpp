#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    // Find the minimum and maximum values using the built-in functions
    int min_value = min({a, b, c});
    int max_value = max({a, b, c});

    cout << min_value << " " << max_value;

    return 0;
}
