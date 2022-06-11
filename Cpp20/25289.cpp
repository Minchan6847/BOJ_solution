//
// Created by Minchan Kim on 2022/06/10.
//
// 제6회 천하제일 코딩대회 예선 Open Contest
// E
// 가장 긴 등차 부분 수열
// not accepted
#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;

    // -99 ~ 99
    vector<pair<int, int>> dp(199);
    vector<unordered_set<int>> v(199);

    int temp;
    cin >> temp;
    for (auto &elem: dp) {
        elem.first = 1;
        elem.second = 0;
    }
    for (int j = 0; j < 199; ++j) {
        v[j].emplace(temp);
    }

    for (int i = 0; i < N - 1; ++i) {
        cin >> temp;

        for (int j = 0; j < 199; ++j) {
            if (dp[j].second) {
                if (temp - dp[j].second == j - 99) {
                    dp[j].first++;
                    dp[j].second = temp;
                }
            } else {
                for (const auto &elem: v[j]) {
                    if (temp - elem == j - 99) {
                        dp[j].first++;
                        dp[j].second = temp;
                    }
                }
                if (!dp[j].second)
                    v[j].emplace(temp);
            }
        }
    }

    int res = 0;
    for (const auto &elem: dp)
        if (res < elem.first)
            res = elem.first;

    cout << res;

    return 0;
}

/*
5
2 5 100 7 9
3

반례
5
99 100 1 2 3
2
(정답은 3)
 */

