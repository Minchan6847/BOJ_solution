//
// Created by Minchan Kim on 2022/05/16.
//
// memory: 21,552 KB, time: 220 ms
#include <iostream>

using namespace std;

enum class k {
    MAX = 10000000
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    bool *own = new bool[static_cast<int>(k::MAX) * 2 + 1]; // 정적할당하니까 에러뜸

    int N;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        int temp;
        cin >> temp;
        own[temp + static_cast<int>(k::MAX)] = true;
    }

    int M;
    cin >> M;
    for (int i = 0; i < M; ++i) {
        int temp;
        cin >> temp;
        cout << own[temp + static_cast<int>(k::MAX)] << ' ';
    }

    return 0;
}
