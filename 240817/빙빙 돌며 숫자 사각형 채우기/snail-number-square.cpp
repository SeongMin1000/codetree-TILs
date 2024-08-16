#include <iostream>
using namespace std;

int arr[101][101];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int dir = 0;
int x = 0, y = 0;

int main() {
    arr[y][x] = 1;
    int n, m;
    cin >> n >> m;

    for (int i = 2; i <= n * m; i++) {
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if (nx < 0 || nx >= m || ny < 0 || ny >= n || arr[ny][nx] != 0)
            dir = (dir + 1) % 4;

        x = x + dx[dir];
        y = y + dy[dir];
        arr[y][x] = i;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}