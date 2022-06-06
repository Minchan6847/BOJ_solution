//
// Created by Minchan Kim on 2022/05/18.
//
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;

    for (int i = 0; i < T; ++i) {
        int x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        int res;
        if (x1 == x2 && y1 == y2) {
            if (r1 == r2)
                res = -1;
            else
                res = 0;
        } else {
            double sum = pow(r1 + r2, 2);
            double distance = pow(x1 - x2, 2) + pow(y1 - y2, 2);

            if (sum == distance)
                res = 1;
            else if (sum < distance)
                res = 0;
            else {
                double sub = pow(r1 - r2, 2);

                if (sub < distance)
                    res = 2;
                else if (sub == distance)
                    res = 1;
                else
                    res = 0;
            }
        }

        cout << res << '\n';
    }

    return 0;
}
