//
// Created by Minchan Kim on 2022/05/21.
//
// memory: 2020 KB, time: 0 ms
#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<int> &use, vector<int> &print_list, const int &n, const int &m) {
    if (!m) {
        for (auto critr = print_list.crbegin() + 1; critr != print_list.crend() - 1; critr++)
            cout << *critr << ' ';
        cout << '\n';
    } else {
        for (int i = print_list[m + 1] + 1; i <= n; ++i) {
            if (!use[i]) {
                use[i] = 1;
                print_list[m] = i;
                dfs(use, print_list, n, m - 1);
                use[i] = 0;
            }
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
    vector<int> printList(M + 2, 0);

    dfs(use, printList, N, M);

    return 0;
}
