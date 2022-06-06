//
// Created by Minchan Kim on 2022/05/15.
//
#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<pair<int, int>> v;

    int N;
    cin >> N;

    int x = 0, y = 0;
    for (int i = 0; i < N; ++i) {
        cin >> x >> y;
        v.emplace_back(pair<int, int>(x, y));
    }

    sort(v.begin(), v.end());

    for (const auto &elem: v)
        cout << elem.first << ' ' << elem.second << '\n';

    return 0;
}
