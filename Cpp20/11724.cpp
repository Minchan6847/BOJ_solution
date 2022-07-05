//
// Created by Minchan Kim on 2022/07/05.
//
// 6,388 KB, 88 ms
#include <iostream>
#include <vector>

using namespace std;

void dfs(const int &cur, const vector<vector<int>> &adj, vector<bool> &visit) {
    visit[cur] = true;
    for (int i = 0; i < adj[cur].size(); ++i) {
        if (!visit[adj[cur][i]])
            dfs(adj[cur][i], adj, visit);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<vector<int>> adj(N + 1);
    vector<bool> visit(N + 1, false);

    while (M--) {
        int v1, v2;
        cin >> v1 >> v2;
        adj[v1].emplace_back(v2);
        adj[v2].emplace_back(v1);
    }

    int res = 0;
    for (int i = 1; i <= N; ++i) {
        if (!visit[i]) {
            res++;
            dfs(i, adj, visit);
        }
    }

    cout << res;

    return 0;
}
