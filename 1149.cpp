//
// Created by Minchan Kim on 2022/05/23.
//
// 2,300 KB, 0 ms
// Top-down
#include <iostream>
#include <vector>

using namespace std;

int dfs(const int &depth, const int &index, const int &N, vector<vector<vector<int>>> &v) {
    if (depth == N - 1)
        return v[depth][index][0];

    if (!v[depth][index][1]) {
        v[depth][index][0] += min(dfs(depth + 1, (index + 1) % 3, N, v), dfs(depth + 1, (index + 2) % 3, N, v));
        v[depth][index][1] = 1;
    }

    return v[depth][index][0];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    vector<vector<vector<int>>> v(N, vector<vector<int>>(3, vector<int>(2, 0)));
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < 3; ++j)
            cin >> v[i][j][0];

    int res = 1'000'001;
    for (int i = 0; i < 3; ++i)
        res = min(dfs(0, i, N, v), res);

    cout << res;

    return 0;
}
