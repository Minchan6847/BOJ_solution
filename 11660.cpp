//
// Created by Minchan Kim on 2022/05/31.
//
// 6,264 KB, 132 ms
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M;
    cin >> N >> M;

    // (1 ≤ N ≤ 1024, 1 ≤ M ≤ 100,000)
    // O(N^2)
    vector<vector<int>> sum(N + 1, vector<int>(N + 1, 0));
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= N; ++j) {
            int temp;
            cin >> temp;
            sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + temp;
        }
    }

    // O(M)
    while (M--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << sum[x2][y2] - sum[x2][y1 - 1] - sum[x1 - 1][y2] + sum[x1 - 1][y1 - 1] << '\n';
    }

    // debugging
    /*
    for (int i = 0; i <= N; ++i) {
        for (int j = 0; j <= N; ++j) {
            cout.width(3);
            cout << sum[i][j] << ' ';
        }
        cout << '\n';
    }
     */
    // debugging - END

    return 0;
}
