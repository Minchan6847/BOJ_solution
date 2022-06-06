//
// Created by Minchan Kim on 2022/05/23.
//
// 2,020 KB, 0 ms
// bottom-up
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;

    vector<vector<int>> dp(2, vector<int>(3, 0));

    for (int i = 0; i < N; ++i) {
        int r, g, b;
        cin >> r >> g >> b;

        dp[~i & 1][0] = r + min(dp[i & 1][1], dp[i & 1][2]);
        dp[~i & 1][1] = g + min(dp[i & 1][0], dp[i & 1][2]);
        dp[~i & 1][2] = b + min(dp[i & 1][0], dp[i & 1][1]);
    }

    cout << min(dp[~(N - 1) & 1][0], min(dp[~(N - 1) & 1][1], dp[~(N - 1) & 1][2]));

    return 0;
}
