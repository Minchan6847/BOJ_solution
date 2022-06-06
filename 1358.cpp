//
// Created by Minchan Kim on 2022/05/19.
//
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int W, H, X, Y, P;
    cin >> W >> H >> X >> Y >> P;
    int R = H / 2;

    int res = 0;
    while (P--) {
        int P_x, P_y;
        cin >> P_x >> P_y;

        if (P_x < X) {
            if ((X - P_x) * (X - P_x) + (Y + R - P_y) * (Y + R - P_y) <= R * R)
                res++;
        } else if (P_x <= X + W) {
            if (P_y >= Y && P_y <= Y + H)
                res++;
        } else {
            if ((X + W - P_x) * (X + W - P_x) + (Y + R - P_y) * (Y + R - P_y) <= R * R)
                res++;
        }
    }

    cout << res;

    return 0;
}

// 제출번호: 43422035, ID: zenith82114
/*
#include<bits/stdc++.h>
using namespace std;

bool pythag(int A, int B, int C) {
    return A*A + B*B <= C*C;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int W, H, X, Y, P;
    cin >> W >> H >> X >> Y >> P;
    int R = H>>1;
    int x, y;
    int cnt = 0;
    while (P--) {
        cin >> x >> y;
        if (x < X)
            cnt += pythag(X-x, Y+R-y, R);
        else if (x > X + W)
            cnt += pythag(x-X-W, Y+R-y, R);
        else
            cnt += (Y <= y && y <= Y+H);
    }
    cout << cnt << '\n';

    return 0;
}
*/
