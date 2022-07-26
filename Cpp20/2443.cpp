//
// Created by Minchan Kim on 2022/07/26.
//
// 2,020 KB, 0 ms
#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < i; ++j)
            cout << ' ';
        for (int j = 0; j < 2 * N - (i * 2 + 1); ++j)
            cout << '*';
        cout << '\n';
    }

    return 0;
}
