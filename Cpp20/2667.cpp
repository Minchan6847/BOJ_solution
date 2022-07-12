//
// Created by Minchan Kim on 2022/07/12.
//
// 2,160 KB, 0 ms
#include <iostream>
#include <vector>

using namespace std;

int N;
vector<vector<int>> m(25, vector<int>(25, 0));
vector<vector<int>> visited(25, vector<int>(25, 0));
vector<pair<int, int>> delta = {{0,  -1},
                                {0,  1},
                                {-1, 0},
                                {1,  0}};
int label = 0;
vector<int> cnt(1, 0);

void dfs(const int &r, const int &c) {
    visited[r][c] = 1;
    cnt[label]++;
    for (const auto &[dr, dc]: delta) {
        int nr = r + dr;
        int nc = c + dc;
        if (nr >= 0 && nr < N && nc >= 0 && nc < N)
            if (!visited[nr][nc] && m[nr][nc])
                dfs(nr, nc);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> N;

    for (int i = 0; i < N; ++i) {
        string s;
        cin >> s;
        for (int j = 0; j < N; ++j)
            m[i][j] = (s[j] == '1') ? 1 : 0;
    }

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            if (!visited[i][j] && m[i][j]) {
                label++;
                cnt.emplace_back(0);
                dfs(i, j);
            }

    cout << label << '\n';
    sort(cnt.begin() + 1, cnt.end());
    for (int i = 1; i < cnt.size(); ++i)
        cout << cnt[i] << '\n';

    return 0;
}
