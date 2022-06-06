//
// Created by Minchan Kim on 2022/05/18.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int K;
    cin >> K;

    vector<int> v(6);
    for (int i = 0; i < 6; ++i) {
        int direction, len;
        cin >> direction >> len;
        v[i] = len;
    }

    cout << K * min(v[0] * v[1] + v[3] * v[4], v[1] * v[2] + v[4] * v[5]);

    return 0;
}
