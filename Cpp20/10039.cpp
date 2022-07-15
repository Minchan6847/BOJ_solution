//
// Created by Minchan Kim on 2022/07/15.
//
// 2,020 KB, 0 ms
#include <iostream>

using namespace std;

int main() {
    int res = 0;
    for (int i = 0; i < 5; ++i) {
        int score;
        cin >> score;
        res += score < 40 ? 40 : score;
    }

    cout << res / 5;

    return 0;
}
