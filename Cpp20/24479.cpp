//
// Created by Minchan Kim on 2022/07/07.
//
// 26,516 KB, 416 ms
#include <iostream>
#include <vector>
#include <set>

using namespace std;

vector<set<int>> adj(100'001);
vector<int> visited(100'001, 0);
int seq = 1;

void dfs(const int &cur) {
    visited[cur] = seq++;
    for (const auto &elem: adj[cur]) {
        if (!visited[elem])
            dfs(elem);
    }
}

int main() {
    int N, M, R;
    cin >> N >> M >> R;

    while (M--) {
        int u, v;
        cin >> u >> v;
        adj[u].emplace(v);
        adj[v].emplace(u);
    }

    dfs(R);

    for (int i = 1; i <= N; ++i)
        cout << visited[i] << '\n';
}
