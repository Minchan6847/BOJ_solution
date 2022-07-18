//
// Created by Minchan Kim on 2022/07/19.
//
// 2,020 KB, 0 ms
#include <iostream>

using namespace std;

int main() {
    int A, B, C, D, E;
    cin >> A >> B >> C >> D >> E;

    int res;
    if (A < 0) {
        res = (-1 * A * C) + D + (B * E);
    } else
        res = (B - A) * E;

    cout << res;

    return 0;
}
