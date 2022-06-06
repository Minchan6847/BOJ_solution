//
// Created by Minchan Kim on 2022/05/25.
//
// 2,168 KB, 0 ms
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

    vector<vector<int>> dp(N + 1, vector<int>(2, 1));
    // dp[i][0 or 1]: v[i]까지의 가장 긴 바이토닉 부분 수열의 길이 (v[i] 포함)

    // dp[i][0] --> 부분 수열의 직전 원소 < v[i]
    // dp[i][1] --> 부분 수열의 직전 원소 > v[i] --> 이후 부분 수열은 작아질 수 밖에 없음

    int res = 1;
    for (int i = 2; i <= N; ++i) {
        for (int j = 1; j < i; ++j) {
            if (v[j] < v[i] && dp[i][0] <= dp[j][0])
                dp[i][0] = dp[j][0] + 1;
            else if (v[j] > v[i] && dp[i][1] <= max(dp[j][0], dp[j][1]))
                dp[i][1] = max(dp[j][0], dp[j][1]) + 1;
        }

        if (res < dp[i][0])
            res = dp[i][0];
        if (res < dp[i][1])
            res = dp[i][1];
    }

    cout << res;

    return 0;
}
