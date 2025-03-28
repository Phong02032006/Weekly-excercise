#include <iostream>
#include <vector>
using namespace std;

const int MAX_M = 1000;
const int MAX_N = 1000;
int grid[MAX_M][MAX_N] = {0};

void updateGrid(int x, int y, int v) {
    grid[x][y] = v;
}

int sumNeighbors(int x, int y, int M, int N) {
    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
    int sum = 0;

    for (int i = 0; i < 8; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= 0 && nx < M && ny >= 0 && ny < N) {
            sum += grid[nx][ny];
        }
    }
    return sum;
}

int main() {
    int M, N, K, Q;
    cin >> M >> N >> K >> Q;

    vector<int> queryResults;

    for (int i = 0; i < K; i++) {
        int x, y, v;
        cin >> x >> y >> v;
        updateGrid(x, y, v);
    }

    for (int i = 0; i < Q; i++) {
        int x, y;
        cin >> x >> y;
        queryResults.push_back(sumNeighbors(x, y, M, N));
    }

    for (int result : queryResults) {
        cout << result << endl;
    }

    return 0;
}
