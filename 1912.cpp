//
// Created by Minchan Kim on 2022/05/23.
//
// 2,412 KB, time: 8 ms
// reference: https://rightbellboy.tistory.com/m/83
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> dp(n);

    for (int i = 0; i < n; ++i)
        cin >> dp[i];

    int max = dp[0];

    // dp[i]는 i번째까지의 연속합
    // dp[i-1] <= 0 이면 i번째 입력 값부터 새로 연속합 시작
    for (int i = 1; i < n; ++i) {
        if (dp[i - 1] > 0)
            dp[i] += dp[i - 1];
        if (dp[i] > max)
            max = dp[i];
    }

    cout << max;

    return 0;
}
