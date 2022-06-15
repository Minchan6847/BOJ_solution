//
// Created by Minchan Kim on 2022/06/15.
//
// O(n)
// 2,020 KB, 0 ms
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n + 1, 1);
    for (int i = 3; i <= n; ++i)
        v[i] = v[i - 1] + v[i - 2];

    cout << v[n] << ' ' << n - 2;

    return 0;
}
