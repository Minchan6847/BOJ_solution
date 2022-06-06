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
    int max_x = 0, max_y = 0;
    for (int i = 0; i < 6; ++i) {
        int direction, len;
        cin >> direction >> len;

        v[i] = len;

        if (direction == 1 || direction == 2) {
            if (max_x < len)
                max_x = len;
        } else {
            if (max_y < len)
                max_y = len;
        }
    }

    int area;
    if ((v[0] == max_x && v[1] == max_y) || (v[0] == max_y && v[1] == max_x) ||
        (v[3] == max_x && v[4] == max_y) || (v[3] == max_y && v[4] == max_x))
        area = v[1] * v[2] + v[4] * v[5];
    else
        area = v[0] * v[1] + v[3] * v[4];

    cout << K * area;

    return 0;
}
