//
// Created by Minchan Kim on 2022/05/20.
//
#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<int> &use, vector<int> &print_list, const int &n, const int &m) {
    if (!m) {
        for (const auto &elem: print_list)
            cout << elem << ' ';
        cout << '\n';
        return;
    }

    for (int i = 1; i <= n; ++i) {
        if (!use[i]) {
            use[i] = 1;
            print_list.emplace_back(i);
            dfs(use, print_list, n, m - 1);
            use[i] = 0;
            print_list.erase(print_list.end() - 1); // memory: 2020 KB, time: 20 ms
            //print_list.pop_back(); // memory: 2020 KB, time: 28 ms
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    vector<int> use(N + 1, 0);
    vector<int> printList;

    dfs(use, printList, N, M);

    return 0;
}
