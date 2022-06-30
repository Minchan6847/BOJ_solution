//
// Created by Minchan Kim on 2022/06/30.
//
// 3,080 KB, 140 ms
#include <iostream>
#include <vector>

using namespace std;

int dfs(const int &node, const int &V, const vector<vector<int>> &adj, vector<int> &isVisit) {

    isVisit[node] = 1;
    int ret = 1;
    for (int i = 1; i <= V; ++i)
        if (!isVisit[i] && adj[node][i])
            ret += dfs(i, V, adj, isVisit);

    return ret;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int V, E;
    cin >> V >> E;

    vector<int> isVisit(V + 1, false);
    vector<vector<int>> adj(V + 1, vector<int>(V + 1, 0));

    while (E--) {
        int v1, v2;
        cin >> v1 >> v2;
        adj[v1][v2] = adj[v2][v1] = 1;
    }

    cout << dfs(1, V, adj, isVisit) - 1;

    return 0;
}
