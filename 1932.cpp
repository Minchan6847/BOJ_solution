//
// Created by Minchan Kim on 2022/05/24.
//
// 2,020 KB, 12 ms
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<vector<int>> dp(2, vector<int>(n, 0));
    cin >> dp[0][0];

    int index = 0;
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            int temp;
            cin >> temp;

            if (!j)
                dp[index ^ 1][j] = temp + dp[index][j];
            else if (j == i)
                dp[index ^ 1][j] = temp + dp[index][j - 1];
            else
                dp[index ^ 1][j] = temp + max(dp[index][j - 1], dp[index][j]);
        }

        index ^= 1;
    }

    int max = -1;
    for (const auto &elem: dp[index])
        if (elem > max)
            max = elem;

    cout << max;

    return 0;
}
