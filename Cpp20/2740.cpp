//
// Created by Minchan Kim on 2022/06/11.
//
// 2,152 KB, 0 ms
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M;
    cin >> N >> M;
    vector<vector<int>> A(N, vector<int>(M, 0));
    for (auto &elem: A)
        for (auto &elem2: elem)
            cin >> elem2;

    int K;
    cin >> M >> K;
    vector<vector<int>> B(M, vector<int>(K, 0));
    for (auto &elem: B)
        for (auto &elem2: elem)
            cin >> elem2;

    vector<vector<int>> Y(N, vector<int>(K, 0));
    // O(M*K*N), N, M, K <= 100
    // 10^6 -> 10 ms
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < K; ++j)
            for (int k = 0; k < M; ++k)
                Y[i][j] += A[i][k] * B[k][j];

    for (auto &elem: Y) {
        for (auto &elem2: elem)
            cout << elem2 << ' ';
        cout << '\n';
    }

    return 0;
}
