//
// Created by Minchan Kim on 2022/05/26.
//
// wrong answer -> 왜 틀린지 모르겠음
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s[2];
    cin >> s[0] >> s[1];

    if (s[0].size() > s[1].size())
        s[0].swap(s[1]);

    vector<vector<int>> dp(s[0].size(), vector<int>(2, 0));

    int max = 0;
    for (int i = 0; i < static_cast<int>(s[0].size()); ++i) {
        for (int j = 0; j < static_cast<int>(s[1].size()); ++j) {
            if (s[0][i] == s[1][j]) {
                dp[i][0] = 1;
                dp[i][1] = j;
                break;
            }
        }
        for (int j = 0; j < i; ++j) {
            if (dp[j][0] >= dp[i][0]) {
                for (int k = dp[j][1] + 1; k < static_cast<int>(s[1].size()); ++k) {
                    if (s[0][i] == s[1][k]) {
                        dp[i][0] = dp[j][0] + 1;
                        dp[i][1] = k;
                        break;
                    }
                }
            }
        }
        if (max < dp[i][0])
            max = dp[i][0];
    }

    cout << max;

    return 0;
}
