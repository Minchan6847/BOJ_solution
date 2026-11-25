//
// Created by Minchan Kim on 2022/06/24.
//
// O(N * log N) / 1 <= N <= 50
// 2,024 KB, 0 ms
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;

    vector<pair<int, int>> A(N, {0, 0});
    for (int i = 0; i < N; ++i) {
        int temp;
        cin >> temp;
        A[i] = {temp, i};
    }

    sort(A.begin(), A.end());

    vector<int> P(N, 0);
    for (int i = 0; i < N; ++i)
        P[A[i].second] = i;

    for (const auto &elem: P)
        cout << elem << ' ';

    return 0;
}
