//
// Created by Minchan Kim on 2022/06/16.
//
// O(N^2)
// (1 ≤ N ≤ 100)
// 2,020 KB, 0 ms
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;

    for (int i = N; i >= 1; --i) {
        for (int j = 0; j < i; ++j)
            cout << '*';
        cout << '\n';
    }

    return 0;
}
