//
// Created by Minchan Kim on 2022/05/26.
//
// reference: https://chanhuiseok.github.io/posts/improve-6/
// 2,412 KB, 12 ms
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

    // 무조전 j보다 작은 쪽을 탐색하므로 K ~ 1 순서로 dp를 정하면 2차원 배열로 할 필요 없이 1차원 배열로 가능
    vector<int> dp(K + 1, 0);
    for (int i = 1; i <= v.size(); ++i) {
        for (int j = K; j >= 1; --j) {
            if (v[i - 1].first <= j)
                dp[j] = max(dp[j], dp[j - v[i - 1].first] + v[i - 1].second);
        }
    }

    cout << dp[K];

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