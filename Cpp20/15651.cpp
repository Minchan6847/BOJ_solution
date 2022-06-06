//
// Created by Minchan Kim on 2022/05/21.
//
#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<int> &print_list, const int &n, const int &m) {
    if (!m) {
        for (auto critr = print_list.crbegin(); critr != print_list.crend() - 1; critr++)
            cout << *critr << ' ';
        cout << '\n';
    } else {
        for (int i = 1; i <= n; ++i) {
            print_list[m] = i;
            dfs(print_list, n, m - 1);
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

    dfs(printList, N, M);

    return 0;
}
