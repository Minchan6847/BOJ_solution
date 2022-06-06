//
// Created by Minchan Kim on 2022/05/18.
//
#include <iostream>
#include <functional>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int x, y, w, h;
    cin >> x >> y >> w >> h;

    priority_queue<int, vector<int>, greater<>> pq;

    pq.emplace(h - y);
    pq.emplace(y);
    pq.emplace(w - x);
    pq.emplace(x);

    cout << pq.top();

    return 0;
}
