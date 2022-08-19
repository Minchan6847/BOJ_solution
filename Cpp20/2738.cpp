//
// Created by Minchan Kim on 2022/08/19.
//
// 2,152 KB, 0 ms
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<vector<int>> m(N, vector<int>(M, 0));
    for (auto &elem: m)
        for (auto &elem2: elem)
            cin >> elem2;
    for (auto &elem: m)
        for (auto &elem2: elem) {
            int t;
            cin >> t;
            elem2 += t;
        }

    for (auto &elem: m) {
        for (auto &elem2: elem)
            cout << elem2 << ' ';
        cout << '\n';
    }

    return 0;
}
