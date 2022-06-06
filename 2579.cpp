//
// Created by Minchan Kim on 2022/05/24.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;

    vector<int> v(N + 1, 0);
    for (int i = 1; i <= N; ++i)
        cin >> v[i];

    vector<vector<int>> dp(N + 1, vector<int>(2, 0));

    dp[1][0] = v[1];
    dp[1][1] = -2'000'000'000;
    if (N >= 2) {
        dp[2][0] = v[1] + v[2];
        dp[2][1] = v[2];
    }

    // dp[i][0]: i번째 계단으로 i-1번째 계단에서 한 칸 올라서 넘어온 경우, 까지의 누적 최대합
    // dp[i][1]: i번째 계단으로 i-2번째 계단에서 두 칸 올라서 넘어온 경우, 까지의 누적 최대합
    for (int i = 3; i <= N; ++i) {
        dp[i][0] = v[i] + dp[i - 1][1];
        dp[i][1] = v[i] + max(dp[i - 2][0], dp[i - 2][1]);
    }

    cout << max(dp[N][0], dp[N][1]);

    return 0;
}
