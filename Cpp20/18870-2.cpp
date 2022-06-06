//
// Created by Minchan Kim on 2022/05/16.
//
// memory: 9,480 KB, time: 468 ms
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N = 0;
    cin >> N;

    vector<int> origin(N), position(N);
    for (int i = 0; i < N; ++i) {
        int temp = 0;
        cin >> temp;
        origin[i] = temp;
        position[i] = temp;
    }

    sort(position.begin(), position.end());
    position.erase(unique(position.begin(), position.end()), position.end()); // 중복 제거

    for (const auto &elem: origin)
        cout << lower_bound(position.begin(), position.end(), elem) - position.begin() << ' ';

    return 0;
}
