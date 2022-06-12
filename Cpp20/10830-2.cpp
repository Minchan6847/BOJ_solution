//
// Created by Minchan Kim on 2022/06/12.
//
// O(N^3 * logB), 2 ≤ N ≤  5, 1 ≤ B ≤ 100,000,000,000
// 125 * 40 = 500
//
// 2,024 KB, 0 ms
#include <iostream>
#include <vector>

using namespace std;

class Matrix {
private:
    vector<vector<int>> m_;

public:
    explicit Matrix(vector<vector<int>> &m) : m_{m} {
    }

    void print() {
        for (const auto &elem: this->m_) {
            for (const auto &elem2: elem)
                cout << elem2 << ' ';
            cout << '\n';
        }
    }

    // O(N^3)
    Matrix operator*(const Matrix &B) {
        int N = static_cast<int>(this->m_.size());
        vector<vector<int>> Y(N, vector<int>(N, 0));
        for (int i = 0; i < N; ++i)
            for (int j = 0; j < N; ++j)
                for (int k = 0; k < N; ++k)
                    Y[i][j] = (Y[i][j] + (this->m_[i][k] * B.m_[k][j]) % 1000) % 1000;
        return Matrix{Y};
    }
};

// O(logB)
template<typename T>
T power(const T &A, const long long &B) {
    if (B == 1ll) {
        return A;
    } else {
        T temp = power(A, B / 2ll);
        if (B % 2ll)
            return temp * temp * A;
        else
            return temp * temp;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    long long B;
    cin >> N >> B;

    vector<vector<int>> m(N, vector<int>(N, 0));
    for (auto &elem: m) {
        for (auto &elem2: elem) {
            cin >> elem2;
            elem2 %= 1000;
        }
    }

    power(Matrix{m}, B).print();

    return 0;
}

/*

3 100000000000
1 2 3
4 5 6
7 8 9

480 792 104
542 417 292
604 42 480


3 1
1 2 3
4 5 6
7 8 9

1 2 3
4 5 6
7 8 9


2 1
1000 1000
1000 1000

0 0
0 0


 */