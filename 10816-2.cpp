//
// Created by Minchan Kim on 2022/05/17.
// memory: 80,148 KB, time: 280 ms
#include <iostream>

using namespace std;

enum class k {
    MAX = 10000000
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int *cnt = new int[static_cast<int>(k::MAX) * 2 + 1];

    int N;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        int temp;
        cin >> temp;
        cnt[temp + static_cast<int>(k::MAX)]++;
    }

    int M;
    cin >> M;
    for (int i = 0; i < M; ++i) {
        int temp;
        cin >> temp;
        cout << cnt[temp + static_cast<int>(k::MAX)] << ' ';
    }

    return 0;
}
