//
// Created by Minchan Kim on 2022/05/24.
//
// 또다른 풀이(이게 정해라고 판단한다.): https://hongcoding.tistory.com/48
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v(n + 1, 0);
    for (int i = 1; i <= n; ++i)
        cin >> v[i];

    vector<vector<int>> dp(n + 1, vector<int>(3, 0));
    dp[1][0] = v[1];
    dp[1][1] = v[1];
    dp[1][2] = v[1];
    if (n >= 2) {
        dp[2][0] = v[1] + v[2];
        dp[2][1] = v[2];
        dp[2][2] = v[2];
    }
    // 0 6 '7' 0 0 '5' 10 0 -> 이걸 위해 dp[i][2]가 필요함
    // 0 6 '7' 0 '0' 0 '5' 10 0 -> dp[i][3, 4, ...]는 필요 없음
    // dp[i][0]: i번째 포도주를 마시기 전에 i-1번째 포도주를 마신 경우, 까지의 누적 최대 합
    // dp[i][1]: i번째 포도주를 마시기 전에 i-2번째 포도주를 마신 경우, 까지의 누적 최대 합
    // dp[i][2]: i번째 포도주를 마시기 전에 i-3번째 포도주를 마신 경우, 까지의 누적 최대 합
    for (int i = 3; i <= n; ++i) {
        dp[i][0] = v[i] + max(dp[i - 1][1], dp[i - 1][2]);
        dp[i][1] = v[i] + max(max(dp[i - 2][0], dp[i - 2][1]), dp[i - 2][2]);
        dp[i][2] = v[i] + max(max(dp[i - 3][0], dp[i - 3][1]), dp[i - 3][2]);
    }

    // dp[n-2] <= dp[n]일 수 밖에 없다.
    int res = -1;
    for (const auto &elem: dp[n])
        if (res < elem)
            res = elem;
    for (const auto &elem: dp[n - 1])
        if (res < elem)
            res = elem;

    cout << res;

    return 0;
}
