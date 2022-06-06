//
// Created by Minchan Kim on 2022/05/24.
//
// reference: https://mygumi.tistory.com/260
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<vector<int>> dp(N + 1, vector<int>(10, 0));
    for (int i = 1; i <= 9; ++i)
        dp[1][i] = 1;

    for (int i = 2; i <= N; ++i) {
        dp[i][0] = dp[i - 1][1];
        for (int j = 1; j <= 8; ++j)
            dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % 1'000'000'000;
        dp[i][9] = dp[i - 1][8];
    }

    int res = 0;
    for (const auto &elem: dp[N])
        res = (res + elem) % 1'000'000'000;

    cout << res;

    return 0;
}
