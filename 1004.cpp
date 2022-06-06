//
// Created by Minchan Kim on 2022/05/19.
//
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;

    for (int i = 0; i < T; ++i) {
        int x1, y1, x2, y2, n;
        cin >> x1 >> y1 >> x2 >> y2 >> n;

        int res = 0;
        for (int j = 0; j < n; ++j) {
            int c_x, c_y, r;
            cin >> c_x >> c_y >> r;

            int contain = 0;
            if ((c_x - x1) * (c_x - x1) + (c_y - y1) * (c_y - y1) < r * r)
                contain++;
            if ((c_x - x2) * (c_x - x2) + (c_y - y2) * (c_y - y2) < r * r)
                contain++;
            if (contain == 1)
                res++;
        }
        cout << res << '\n';
    }

    return 0;
}
