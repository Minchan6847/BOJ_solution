//
// Created by Minchan Kim on 2022/07/03.
//
// DP
// O(n) / (1 ≤ n ≤ 1,000)
// 2,024 KB, 780 ms
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n + 1, 1);

    for (int i = 2; i <= n; ++i)
        v[i] = (v[i - 1] + v[i - 2]) % 10'007;

    cout << v[n];

    return 0;
}

// n    = 1 2 3 4 5
// v[n] = 1 2 3 5 8 ...
