//
// Created by Minchan Kim on 2022/06/09.
//
// 2,152 KB, 0 ms
// O(N*N+4^(logN))?
#include <iostream>
#include <vector>

using namespace std;

int f(const int &depth, const int &r, const int &c, vector<vector<int>> &v, pair<int, int> &res) {
    if (depth == 1) {
        if (v[r][c])
            res.second += 1;
        else
            res.first += 1;
        return v[r][c];
    } else {
        int temp;
        int half = depth / 2;
        temp = f(half, r - half, c - half, v, res)
               + f(half, r - half, c, v, res)
               + f(half, r, c - half, v, res)
               + f(half, r, c, v, res);

        if (temp == 4) {
            res.second -= 3;
            return 1;
        } else if (!temp) {
            res.first -= 3;
            return 0;
        } else {
            return 5;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;

    vector<vector<int>> v(N + 1, vector<int>(N + 1, 0));
    for (int i = 1; i <= N; ++i)
        for (int j = 1; j <= N; ++j)
            cin >> v[i][j];

    pair<int, int> res(0, 0);
    f(N, N, N, v, res);

    cout << res.first << '\n' << res.second;

    return 0;
}

/*
2
1 0
0 1

2
1 1
1 1

4
1 1 0 0
1 1 0 0
0 0 1 0
0 0 0 1

4
1 1 1 1
1 1 1 1
1 1 1 1
1 1 1 1

 */