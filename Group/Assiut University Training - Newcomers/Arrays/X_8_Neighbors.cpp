#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;
    
    vector<vector<char>> grid(N, vector<char>(M));

    // Read the grid
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> grid[i][j];
        }
    }

    int X, Y;
    cin >> X >> Y;

    // Convert to 0-based indexing
    X--, Y--;

    // Define neighbor directions (dx, dy)
    vector<pair<int, int>> directions = {
        {-1, -1}, {-1, 0}, {-1, 1},
        { 0, -1},         { 0, 1},
        { 1, -1}, { 1, 0}, { 1, 1}
    };

    // Check all neighbors
    for (size_t i = 0; i < directions.size(); i++) {
        int nx = X + directions[i].first;
        int ny = Y + directions[i].second;
        
        if (nx >= 0 && nx < N && ny >= 0 && ny < M) { // Ensure it's inside the grid
            if (grid[nx][ny] != 'x') {
                cout << "no\n";
                return 0;
            }
        }
    }

    cout << "yes\n";
    return 0;
}
