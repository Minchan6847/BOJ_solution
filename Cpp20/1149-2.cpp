//
// Created by Minchan Kim on 2022/05/23.
//
// 2,164 KB, 0 ms
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

    vector<vector<int>> dp(N, vector<int>(3, 0));
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < 3; ++j)
            cin >> dp[i][j];

    for (int i = 1; i < N; ++i) {
        dp[i][0] += min(dp[i - 1][1], dp[i - 1][2]);
        dp[i][1] += min(dp[i - 1][0], dp[i - 1][2]);
        dp[i][2] += min(dp[i - 1][0], dp[i - 1][1]);
    }

    cout << min(dp[N - 1][0], min(dp[N - 1][1], dp[N - 1][2]));

    return 0;
}
