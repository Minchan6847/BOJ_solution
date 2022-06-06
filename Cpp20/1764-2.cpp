//
// Created by Minchan Kim on 2022/05/17.
//
// memory: 7,508 KB, time: 40 ms
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

    unordered_set<string> us;
    for (int i = 0; i < N; ++i) {
        string temp;
        cin >> temp;
        us.emplace(temp);
    }

    set<string> s;
    for (int i = 0; i < M; ++i) {
        string temp;
        cin >> temp;
        if (us.count(temp))
            s.emplace(temp);
    }

    cout << s.size() << '\n';
    for (const auto &elem: s)
        cout << elem << '\n';

    return 0;
}
