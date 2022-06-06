//
// Created by Minchan Kim on 2022/05/20.
//
// memory: 2020 KB, time: 0 ms
#include <iostream>
#include <vector>

using namespace std;

int dp(const int &n, const int &k, vector<vector<int>> &v) {
    if (!k || n == k) {
        v[n][k] = 1;
        return v[n][k];
    }

    if (!v[n][k])
        v[n][k] = dp(n - 1, k - 1, v) + dp(n - 1, k, v);

    return v[n][k];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<vector<int>> v(30, vector<int>(30, 0));
    for (int k = 1; k < 30; ++k)
        dp(29, k, v);

    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;
        // mCn
        cout << v[M][N] << '\n';
    }

    return 0;
}
