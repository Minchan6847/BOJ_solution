//
// Created by Minchan Kim on 2022/06/06.
//
// 2,020 KB, 0 ms
#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, K;
    cin >> N >> K;

    queue<int> q;
    for (int i = 1; i <= N; ++i)
        q.emplace(i);

    cout << '<';
    // O(N*K), (1 ≤ K ≤ N ≤ 1,000), 시간 제한: 2 초
    while (q.size() > 1) {
        for (int i = 0; i < K - 1; ++i) {
            q.emplace(q.front());
            q.pop();
        }
        cout << q.front() << ", ";
        q.pop();
    }
    cout << q.front() << '>';

    return 0;
}
