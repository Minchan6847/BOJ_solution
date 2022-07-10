//
// Created by Minchan Kim on 2022/07/11.
//
// 3,088 KB, 4 ms
#include <iostream>
#include <vector>
#include <queue>
#include <set>

using namespace std;

vector<set<int>> adj(1'001);
vector<bool> visited(1'001, false);
vector<bool> visited2(1'001, false);
queue<int> q;

void dfs(const int &cur) {
    visited[cur] = true;
    cout << cur << ' ';
    for (const auto &elem: adj[cur])
        if (!visited[elem])
            dfs(elem);
}

void bfs(const int &V) {
    visited2[V] = true;
    cout << V << ' ';
    q.emplace(V);
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        for (const auto &elem: adj[node]) {
            if (!visited2[elem]) {
                visited2[elem] = true;
                cout << elem << ' ';
                q.emplace(elem);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M, V;
    cin >> N >> M >> V;

    while (M--) {
        int u, v;
        cin >> u >> v;
        adj[u].emplace(v);
        adj[v].emplace(u);
    }

    dfs(V);
    cout << '\n';

    bfs(V);

    return 0;
}
