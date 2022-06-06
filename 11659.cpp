//
// Created by Minchan Kim on 2022/05/27.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<int> sum(N + 1, 0);
    for (int i = 1; i <= N; ++i) {
        int temp;
        cin >> temp;
        sum[i] = sum[i - 1] + temp;
    }

    while (M--) {
        int i, j;
        cin >> i >> j;
        cout << sum[j] - sum[i - 1] << '\n';
    }

    return 0;
}
