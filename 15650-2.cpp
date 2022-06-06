//
// Created by Minchan Kim on 2022/05/21.
//
// memory: 2020 KB, time: 0 ms
#include <iostream>
#include <vector>

using namespace std;

void dfs(const int &num, vector<int> &print_list, const int &n, const int &m) {
    if (!m) {
        for (auto critr = print_list.crbegin(); critr != print_list.crend() - 1; critr++)
            cout << *critr << ' ';
        cout << '\n';
    } else {
        for (int i = num; i <= n; ++i) {
            print_list[m] = i;
            dfs(i + 1, print_list, n, m - 1);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    vector<int> printList(M + 1, 0);

    dfs(1, printList, N, M);

    return 0;
}
