//
// Created by Minchan Kim on 2022/05/31.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, K;
    cin >> N >> K;

    vector<int> v(N, 0);
    for (int i = 0; i < N; ++i)
        cin >> v[i];

    int cnt = 0;
    while (N-- && K) {
        if (K >= v[N]) {
            cnt += K / v[N];
            K %= v[N];
        }
    }

    cout << cnt;

    return 0;
}
