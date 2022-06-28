//
// Created by Minchan Kim on 2022/06/28.
//
// O(L^2) / 1 ≤ L ≤ 50
// 2,020 KB, 0 ms
#include <iostream>

#define MOD 1234567891

using namespace std;

long long pow(const long long &base, const int &expo) {
    long long ret = 1;
    for (int i = 0; i < expo; ++i) {
        ret = (ret * base) % MOD;
    }
    return ret;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int L;
    cin >> L;

    long long res = 0;
    for (int i = 0; i < L; ++i) {
        char alp;
        cin >> alp;
        res = (res + (alp - 96ll) * pow(31ll, i)) % MOD;
    }

    cout << res;

    return 0;
}
