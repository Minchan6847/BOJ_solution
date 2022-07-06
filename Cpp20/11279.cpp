//
// Created by Minchan Kim on 2022/07/06.
//
// 2,916 KB, 16 ms
#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;

    priority_queue<int> pq;

    while (N--) {
        int x;
        cin >> x;

        if (!x) {
            if (pq.empty())
                cout << 0;
            else {
                cout << pq.top();
                pq.pop();
            }
            cout << '\n';
        } else
            pq.emplace(x);
    }
}
