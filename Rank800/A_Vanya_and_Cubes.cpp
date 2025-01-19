#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int height = 0; 
    int totalCubes = 0; 

    for (int i = 1; ; i++) {
        int cubesForLevel = (i * (i + 1)) / 2; // Cubes needed for the i-th level
        if (totalCubes + cubesForLevel > n) {
            break;
        }
        totalCubes += cubesForLevel;
        height++;
    }

    cout << height << endl;
    return 0;
}
