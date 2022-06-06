//
// Created by Minchan Kim on 2022/05/16.
//
#include <iostream>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;

    set<int> s;
    for (int i = 0; i < N; ++i) {
        int temp;
        cin >> temp;
        s.insert(temp);
    }

    int M;
    cin >> M;
    for (int i = 0; i < M; ++i) {
        int temp;
        cin >> temp;
        cout << s.count(temp) << ' '; // memory: 25,256 KB, time: 540 ms
        //cout << (s.find(temp) != s.end() ? 1 : 0) << ' '; // memory: 25,256 KB, time: 548 ms
    }

    return 0;
}
