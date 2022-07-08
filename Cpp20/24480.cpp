//
// Created by Minchan Kim on 2022/07/09.
//
// 10,928 KB, 92 ms
#include <iostream>
#include <vector>
#include <functional>

using namespace std;

vector<vector<int>> adj(100'001);
vector<int> visited(100'001, 0);
int seq = 1;

void dfs(const int &cur) {
    visited[cur] = seq++;
    for (const auto &elem: adj[cur])
        if (!visited[elem])
            dfs(elem);
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

    dfs(R);

    for (int i = 1; i <= N; ++i)
        cout << visited[i] << '\n';

    return 0;
}
