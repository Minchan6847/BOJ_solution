//
// Created by Minchan Kim on 2022/06/10.
//
// 제6회 천하제일 코딩대회 예선 Open Contest
// B
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int y, m;
        cin >> y >> m;

        if (m == 3) {
            cout << y << ' ' << 2 << ' ';
            if ((!(y % 4) && (y % 100)) || !(y % 400))
                cout << 29;
            else
                cout << 28;
        } else if (m == 1)
            cout << y - 1 << ' ' << 12 << ' ' << 31;
        else if (m == 2 || m == 4 || m == 6 || m == 8 || m == 9 || m == 11)
            cout << y << ' ' << m - 1 << ' ' << 31;
        else
            cout << y << ' ' << m - 1 << ' ' << 30;

        cout << '\n';
    }

    return 0;
}
