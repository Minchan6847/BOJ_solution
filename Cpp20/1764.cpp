//
// Created by Minchan Kim on 2022/05/17.
//
// memory: 12,924 KB, time: 56 ms
#include <iostream>
#include <set>
#include <unordered_set>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M;
    cin >> N >> M;

    set<string> s;
    unordered_set<string> us;

    //if (N > M) { // memory: 12,924 KB, time: 68 ms
    if (N < M) { // memory: 12,924 KB, time: 56 ms
        for (int i = 0; i < N; ++i) {
            string temp;
            cin >> temp;
            s.emplace(temp);
        }
        for (int i = 0; i < M; ++i) {
            string temp;
            cin >> temp;
            us.emplace(temp);
        }
    } else {
        for (int i = 0; i < N; ++i) {
            string temp;
            cin >> temp;
            us.emplace(temp);
        }
        for (int i = 0; i < M; ++i) {
            string temp;
            cin >> temp;
            s.emplace(temp);
        }
    }

    vector<string> v;
    for (const auto &elem: s)
        if (us.count(elem))
            v.emplace_back(elem);

    cout << v.size() << '\n';
    for (const auto &elem: v)
        cout << elem << '\n';

    return 0;
}
