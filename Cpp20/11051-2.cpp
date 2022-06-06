//
// Created by Minchan Kim on 2022/05/20.
//
// memory: 5,848 KB, time: 4 ms
#include <iostream>
#include <vector>

using namespace std;

int binomialCoefficient(const int &n, const int &k, vector<vector<int>> &v) {
    if (!k || n == k)
        return 1;

    int return_val;

    if (!v[n - 1][k - 1])
        v[n - 1][k - 1] = binomialCoefficient(n - 1, k - 1, v);
    return_val = v[n - 1][k - 1];

    if (!v[n - 1][k])
        v[n - 1][k] = binomialCoefficient(n - 1, k, v);
    return_val += v[n - 1][k];

    if (return_val >= 10007)
        return_val -= 10007;

    return return_val;
}

// nCk = 10007 * 몫 + Remainder
// => Remainder = nCk - 10007 * 몫
int main() {
    vector<vector<int>> v(1000, vector<int>(1000, 0));

    int N, K;
    cin >> N >> K;

    cout << binomialCoefficient(N, K, v);

    return 0;
}
