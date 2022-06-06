//
// Created by Minchan Kim on 2022/06/06.
//
// 4,156 KB, 8 ms
#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;

    queue<int> q;
    for (int i = 1; i <= N; ++i)
        q.emplace(i);

    while (q.size() > 2) {
        q.pop();
        q.emplace(q.front());
        q.pop();
    }

    cout << q.back();

    return 0;
}
