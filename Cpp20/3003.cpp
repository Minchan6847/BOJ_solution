//
// Created by Minchan Kim on 2022/08/07.
//
// 2,020 KB, 0 ms
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector v(6, 0);
    for (auto &elem: v)
        cin >> elem;

    for (int i = 0; i < 2; ++i)
        cout << 1 - v[i] << ' ';

    for (int i = 2; i < 5; ++i)
        cout << 2 - v[i] << ' ';

    cout << 8 - v[5];

    return 0;
}
