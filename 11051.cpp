//
// Created by Minchan Kim on 2022/05/20.
//
// // memory: 17,600 KB, time: 180 ms
#include <iostream>
#include <map>

using namespace std;

int binomialCoefficient(const int &n, const int &k, map<pair<int, int>, int> &m) {
    if (!k || n == k)
        return 1;

    int return_val;

    if (!m.count({n - 1, k - 1}))
        m[{n - 1, k - 1}] = binomialCoefficient(n - 1, k - 1, m);
    return_val = m[{n - 1, k - 1}];

    if (!m.count({n - 1, k}))
        m[{n - 1, k}] = binomialCoefficient(n - 1, k, m);
    return_val += m[{n - 1, k}];

    if (return_val >= 10007)
        return_val -= 10007;

    return return_val;
}

// nCk = 10007 * 몫 + Remainder
// => Remainder = nCk - 10007 * 몫
int main() {
    map<pair<int, int>, int> m;

    int N, K;
    cin >> N >> K;

    cout << binomialCoefficient(N, K, m);

    return 0;
}
