//
// Created by Minchan Kim on 2022/06/12.
//
// reference: https://cocoon1787.tistory.com/349
//
// O(N^3 * logE)
// N = 2, 1 <= n(E) <= 10^18
//
// 2,024 KB, 0 ms
#include <iostream>
#include <vector>

#define MOD 1'000'000'007

using namespace std;

typedef vector<vector<long long>> Matrix;

Matrix operator*(Matrix &A, Matrix &B) {
    int N = static_cast<int>(A.size());
    Matrix Y(N, vector<long long>(N, 0ll));
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            for (int k = 0; k < N; ++k)
                Y[i][j] = (Y[i][j] + (A[i][k] * B[k][j]) % MOD) % MOD;
    return Y;
}

int main() {
    long long n;
    cin >> n;

    Matrix base{{1ll, 1ll},
                {1ll, 0ll}};
    Matrix res{{1ll, 0ll},
               {0ll, 1ll}};
    n--;
    while (n) {
        if (n & 1ll)
            res = res * base;
        base = base * base;
        n >>= 1;
    }

    cout << res[0][0];

    return 0;
}

/*
test cases

1
1

2
1

3
2

4
3

1000000000000000000
209783453
 */