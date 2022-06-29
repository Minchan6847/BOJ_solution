//
// Created by Minchan Kim on 2022/06/29.
//
// 시간 제한: 1 초
// (1 ≤ M, N ≤ 500, 0 ≤ B ≤ 6.4 × 107)
// 3,080 KB, 140 ms
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M, B;
    cin >> N >> M >> B;

    int max = -1, min = 257;
    vector<vector<int>> v(N, vector<int>(M, 0));
    for (auto &elem: v) {
        for (auto &elem2: elem) {
            cin >> elem2;
            if (max < elem2)
                max = elem2;
            if (min > elem2)
                min = elem2;
        }
    }

    int res_time = 2'000'000'000, res_height = 0;
    // O((max - min)*MN) / 256 * 500 * 500 = 6.4 × 10^7
    for (int i = max; i >= min; --i) {// O(max - min) / max. 256
        int B_temp = B, time = 0;
        // O(M*N)
        for (const auto &elem: v) {
            for (const auto &elem2: elem) {
                if (elem2 < i) {
                    B_temp -= i - elem2;
                    time += i - elem2;
                } else if (elem2 > i) {
                    B_temp += elem2 - i;
                    time += (elem2 - i) * 2;
                }
            }
        }
        if (B_temp >= 0) {
            if (res_time > time) {
                res_time = time;
                res_height = i;
            }
        }
    }

    cout << res_time << ' ' << res_height;

    return 0;
}
