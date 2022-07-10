//
// Created by Minchan Kim on 2022/07/10.
//
// 8,840 KB, 104 ms
#include <iostream>
#include <vector>
#include <queue>
#include <functional>

using namespace std;

vector<vector<int>> adj(100'001);
vector<int> visited(100'001, 0);
queue<int> q;
int seq = 1;

void bfs(const int &R) {
    visited[R] = seq++;
    q.emplace(R);
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        for (const auto &elem: adj[node]) {
            if (!visited[elem]) {
                visited[elem] = seq++;
                q.emplace(elem);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M, R;
    cin >> N >> M >> R;

    while (M--) {
        int u, v;
        cin >> u >> v;
        adj[u].emplace_back(v);
        adj[v].emplace_back(u);
    }

    for (int i = 1; i <= N; ++i)
        sort(adj[i].begin(), adj[i].end(), greater<>());

    bfs(R);

    for (int i = 1; i <= N; ++i)
        cout << visited[i] << '\n';

    return 0;
}
