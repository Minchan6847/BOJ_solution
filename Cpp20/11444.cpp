//
// Created by Minchan Kim on 2022/06/12.
//
// reference(fibonacci): https://ohgym.tistory.com/1
// reference(power): https://hbj0209.tistory.com/43
//
// O(N^3 * logE)
// N = 2, 1 <= n(E) <= 10^18
//
// 2,024 KB, 0 ms
#include <iostream>
#include <vector>

#define MOD 1'000'000'007

using namespace std;

class Matrix {
private:
    vector<vector<long long>> m_;

public:
    explicit Matrix(const vector<vector<long long>> &m) : m_(m) {
    }

    long long getElem(const int &r, const int &c) {
        return this->m_[r][c];
    }

    // O(N^3)
    Matrix operator*(Matrix &B) {
        int N = static_cast<int>(this->m_.size());
        vector<vector<long long>> Y(N, vector<long long>(N, 0ll));
        for (int i = 0; i < N; ++i)
            for (int j = 0; j < N; ++j)
                for (int k = 0; k < N; ++k)
                    Y[i][j] = (Y[i][j] + (this->m_[i][k] * B.m_[k][j]) % MOD) % MOD;
        return Matrix{Y};
    }
};

// O(logE), E: exponent
Matrix power(Matrix base, long long exponent) {
    Matrix res{vector<vector<long long>>{{1ll, 0ll},
                                         {0ll, 1ll}}};
    while (exponent) {
        if (exponent & 1ll)
            res = res * base;
        base = base * base;
        exponent >>= 1;
    }

    return res;
}

long long fibo(const long long n) {
    Matrix base{vector<vector<long long>>{{1ll, 1ll},
                                          {1ll, 0ll}}};

    return power(base, n - 1ll).getElem(0, 0);
}

int main() {
    long long n;
    cin >> n;
    cout << fibo(n);

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