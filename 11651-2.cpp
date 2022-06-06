//
// Created by Minchan Kim on 2022/05/16.
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

    int N = 0;
    cin >> N;
    vector<pair<int, int>> v(N);

    for (int i = 0; i < N; ++i)
        cin >> v[i].second >> v[i].first;

    sort(v.begin(), v.end());

    for (const auto &elem: v)
        cout << elem.second << ' ' << elem.first << '\n';

    return 0;
}
