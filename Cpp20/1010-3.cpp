//
// Created by Minchan Kim on 2022/05/20.
//
// memory: 2020 KB, time: 0 ms
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        // mCn
        int res = 1;
        for (int i = 0; i < N; ++i) {
            res *= M - i;
            res /= i + 1;
        }

        cout << res << '\n';
    }

    return 0;
}
