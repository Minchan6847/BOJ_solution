//
// Created by Minchan Kim on 2022/06/07.
//
// 2,024 KB, 0 ms
#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;

    queue<pair<int, int>> q;
    priority_queue<int> pq;

    while (T--) {
        int N, M;
        cin >> N >> M;

        for (int i = 0; i < N; ++i) {
            int temp;
            cin >> temp;
            q.emplace(temp, i);
            pq.emplace(temp);
        }

        int res = 0;
        while (true) {
            pair<int, int> front = q.front();
            if (front.first == pq.top()) {
                q.pop();
                pq.pop();
                res++;
                if (front.second == M)
                    break;
            } else {
                q.pop();
                q.emplace(front);
            }
        }

        cout << res << '\n';

        while (!q.empty())
            q.pop();
        while (!pq.empty())
            pq.pop();
    }

    return 0;
}
