//
// Created by Minchan Kim on 2022/07/04.
//
// 2,916 KB, 16 ms
#include <iostream>
#include <queue>
#include <vector>
#include <functional>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    priority_queue<int, vector<int>, greater<>> pq;

    int N;
    cin >> N;

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

    return 0;
}
