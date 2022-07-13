//
// Created by Minchan Kim on 2022/07/13.
//
// 2,172 KB, 0 ms
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int>> m(102, vector<int>(102, 0));
vector<vector<int>> visited(102, vector<int>(102, 0));
queue<pair<int, int>> q;
vector<pair<int, int>> delta = {{0,  -1},
                                {0,  1},
                                {-1, 0},
                                {1,  0}};
int N, M;

void bfs(const int &r, const int &c) {
    visited[r][c] = 1;
    q.emplace(r, c);
    while (!q.empty()) {
        pair<int, int> node = q.front();
        q.pop();
        for (const auto &[dr, dc]: delta) {
            int nr = node.first + dr;
            int nc = node.second + dc;
            if (!visited[nr][nc] && m[nr][nc]) {
                visited[nr][nc] = visited[node.first][node.second] + 1;
                q.emplace(nr, nc);
                if (nr == N && nc == M)
                    return;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> N >> M;

    for (int i = 1; i <= N; ++i) {
        string s;
        cin >> s;
        for (int j = 1; j <= M; ++j)
            m[i][j] = s[j - 1] - '0';
    }

    bfs(1, 1);

    cout << visited[N][M];

    return 0;
}
