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

// O(N^3)
vector<vector<int>> multi(const vector<vector<int>> &A, const vector<vector<int>> &C, const int &N) {
    vector<vector<int>> Y(N, vector<int>(N, 0));
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            for (int k = 0; k < N; ++k)
                Y[i][j] = (Y[i][j] + (A[i][k] * C[k][j]) % 1000) % 1000;
    return Y;
}

vector<vector<int>> matrix_mod(const vector<vector<int>> &A, const int &N) {
    vector<vector<int>> Y(N, vector<int>(N, 0));
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            Y[i][j] = A[i][j] % 1000;
    return Y;
}

// O(logB)
vector<vector<int>> power(const vector<vector<int>> &A, const long long &B, const int &N) {
    if (B == 1ll) {
        return matrix_mod(A, N);
    } else {
        vector<vector<int>> temp = power(A, B / 2ll, N);
        if (B % 2ll) {
            return multi(multi(temp, temp, N), A, N);
        } else
            return multi(temp, temp, N);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    long long B;
    cin >> N >> B;
    vector<vector<int>> A(N, vector<int>(N, 0));
    for (auto &elem: A)
        for (auto &elem2: elem)
            cin >> elem2;

    vector<vector<int>> Y = power(A, B, N);
    for (const auto &elem: Y) {
        for (const auto &elem2: elem)
            cout << elem2 << ' ';
        cout << '\n';
    }

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