//
// Created by Minchan Kim on 2022/05/16.
//
// memory: 23,040 KB, time: 380 ms
#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;

    unordered_set<int> us;
    for (int i = 0; i < N; ++i) {
        int temp;
        cin >> temp;
        us.emplace(temp);
    }

    int M;
    cin >> M;
    for (int i = 0; i < M; ++i) {
        int temp;
        cin >> temp;
        cout << us.count(temp) << ' ';
    }

    return 0;
}
