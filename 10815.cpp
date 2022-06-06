//
// Created by Minchan Kim on 2022/05/16.
//
// memory: 5,892 KB, time: 216 ms
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N = 0;
    cin >> N;
    vector<int> own(N);
    for (int i = 0; i < N; ++i)
        cin >> own[i];

    sort(own.begin(), own.end());

    int M = 0;
    cin >> M;
    vector<int> check(M);
    for (int i = 0; i < M; ++i)
        cin >> check[i];

    for (const auto &elem: check)
        cout << binary_search(own.begin(), own.end(), elem) << ' ';

    return 0;
}
