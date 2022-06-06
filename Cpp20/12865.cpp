//
// Created by Minchan Kim on 2022/05/26.
//
// reference: https://gsmesie692.tistory.com/m/113
// 42,004 KB, 44 ms
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, K;
    cin >> N >> K;

    vector<pair<int, int>> v;
    for (int i = 0; i < N; ++i) {
        int W, V;
        cin >> W >> V;
        if (W <= K && V > 0)
            v.emplace_back(W, V);
    }

    vector<vector<int>> dp(v.size() + 1, vector<int>(K + 1, 0));
    for (int i = 1; i <= v.size(); ++i) {
        for (int j = 1; j <= K; ++j) {
            if (v[i - 1].first <= j)
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - v[i - 1].first] + v[i - 1].second);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    cout << dp[v.size()][K];

    return 0;
}

/*
// test cases

2 6
3 5
4 6
6

1 5
4 12
12

1 5
6 3
0

*/