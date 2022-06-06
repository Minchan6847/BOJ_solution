//
// Created by Minchan Kim on 2022/05/23.
//
// 2,020 KB, time: 8 ms
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int dp;
    cin >> dp;
    int max = dp;
    for (int i = 1; i < n; ++i) {
        int num;
        cin >> num;
        if (dp > 0)
            dp += num;
        else
            dp = num;

        if (dp > max)
            max = dp;
    }

    cout << max;

    return 0;
}
