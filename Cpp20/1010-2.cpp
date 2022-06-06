//
// Created by Minchan Kim on 2022/05/20.
//
// memory: 2020 KB, time: 0 ms
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<vector<int>> v(30, vector<int>(30, 0));
    for (int n = 1; n < 30; ++n) {
        for (int k = 0; k <= n; ++k) {
            if (!k || n == k)
                v[n][k] = 1;
            else
                v[n][k] = v[n-1][k-1] + v[n-1][k];
        }
    }

    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;
        // mCn
        cout << v[M][N] << '\n';
    }

    return 0;
}
