//
// Created by Minchan Kim on 2022/08/05.
//
// 14,092 KB, 244 ms
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int>> v(1002, vector<int>(1002, -1));
vector<vector<int>> visited(1002, vector<int>(1002, 0));
queue<pair<int, int>> q;
vector<pair<int, int>> delta = {{0,  -1},
                                {0,  1},
                                {-1, 0},
                                {1,  0}};

void bfs() {
    while (!q.empty()) {
        int r = q.front().first;
        int c = q.front().second;
        q.pop();
        for (const auto &[dr, dc]: delta) {
            int nr = r + dr;
            int nc = c + dc;
            if (!visited[nr][nc] && v[nr][nc] == 0) {
                v[nr][nc] = 1;
                visited[nr][nc] = visited[r][c] + 1;
                q.emplace(nr, nc);
            }
        }
    }
}

int main() {
    int M, N;
    cin >> M >> N;

    bool done = true;
    for (int i = 1; i <= N; ++i)
        for (int j = 1; j <= M; ++j) {
            cin >> v[i][j];
            if (v[i][j] == 0)
                done = false;
            if (v[i][j] == 1) {
                visited[i][j] = 1;
                q.emplace(i, j);
            }
        }

    if (done)
        cout << 0;
    else {
        bfs();

        bool failure = false;
        for (int i = 1; i <= N; ++i)
            for (int j = 1; j <= M; ++j)
                if (v[i][j] == 0)
                    failure = true;

        if (failure)
            cout << -1;
        else {
            int max_n = 0;
            for (int i = 1; i <= N; ++i)
                for (int j = 1; j <= M; ++j)
                    if (max_n < visited[i][j])
                        max_n = visited[i][j];

            cout << max_n - 1;
        }
    }

    return 0;
}

/*
        // debugging
        for (int i = 1; i <= N; ++i) {
            for (int j = 1; j <= M; ++j) {
                cout << visited[i][j] << ' ';
            }
            cout << '\n';
        }
        // debugging
 */
