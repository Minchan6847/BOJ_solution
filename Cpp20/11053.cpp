//
// Created by Minchan Kim on 2022/05/25.
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

    vector<int> dp(N + 1, 1);
    // dp[i]: v[i]로 끝나는 가장 긴 증가하는 부분 수열의 길이

    int max = 1;
    for (int i = 2; i <= N; ++i) {
        for (int j = 1; j < i; ++j) {
            if (v[i] > v[j] && dp[i] <= dp[j])
                dp[i] = dp[j] + 1;
        }
        if (max < dp[i])
            max = dp[i];
    }

    cout << max;

    return 0;
}
