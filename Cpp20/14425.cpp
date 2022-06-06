//
// Created by Minchan Kim on 2022/05/17.
//
#include <iostream>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M;
    cin >> N >> M;
    set<string> s;
    for (int i = 0; i < N; ++i) {
        string temp;
        cin >> temp;
        s.insert(temp);
    }

    int cnt = 0;
    for (int i = 0; i < M; ++i) {
        string temp;
        cin >> temp;
        cnt += static_cast<int>(s.count(temp));
    }

    cout << cnt;

    return 0;
}
