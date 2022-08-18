//
// Created by Minchan Kim on 2022/08/18.
//
// 2,020 KB, 0 ms
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<bool> v(31, false);
    for (int i = 0; i < 28; ++i) {
        int n;
        cin >> n;
        v[n] = true;
    }

    for (int i = 1; i <= 30; ++i)
        if (!v[i])
            cout << i << '\n';

    return 0;
}
