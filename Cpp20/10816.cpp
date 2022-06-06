//
// Created by Minchan Kim on 2022/05/17.
//
// time over
#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    unordered_multiset<int> ums;

    int N;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        int temp;
        cin >> temp;
        ums.emplace(temp);
    }

    int M;
    cin >> M;
    for (int i = 0; i < M; ++i) {
        int temp;
        cin >> temp;
        cout << ums.count(temp) << ' ';
    }

    return 0;
}
