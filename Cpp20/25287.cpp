//
// Created by Minchan Kim on 2022/06/10.
//
// 제6회 천하제일 코딩대회 예선 Open Contest
// C
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int yes = 1;
        int i;
        cin >> i;
        int pre = min(i, N - i + 1);
        for (int k = 0; k < N - 1; ++k) {
            cin >> i;
            if (yes) {
                if (i < N - i + 1) {
                    if (pre <= i) {
                        pre = i;
                    } else {
                        if (pre <= N - i + 1)
                            pre = N - i + 1;
                        else
                            yes = 0;
                    }
                } else {
                    if (pre <= N - i + 1)
                        pre = N - i + 1;
                    else {
                        if (pre <= i)
                            pre = i;
                        else
                            yes = 0;
                    }
                }
            }
        }
        if (yes)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
