//
// Created by Minchan Kim on 2022/07/06.
//
// O(N) / 1 ≤ N ≤ 15
// 2,020 KB, 0 ms
#include <iostream>

using namespace std;

int res = 0;

void dq(const int &level, int &r, int &c) {
    if (!level)
        return;

    if (r >= (1 << (level - 1))) {
        res += 1 << (level * 2 - 1);
        r -= 1 << (level - 1);
    }
    if (c >= (1 << (level - 1))) {
        res += 1 << (level * 2 - 2);
        c -= 1 << (level - 1);
    }

    dq(level - 1, r, c);
}

int main() {
    int N, r, c;
    cin >> N >> r >> c;

    dq(N, r, c);

    cout << res;
}
