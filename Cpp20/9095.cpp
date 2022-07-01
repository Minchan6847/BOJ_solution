//
// Created by Minchan Kim on 2022/07/01.
//
// 2,020 KB, 0 ms
#include <iostream>

using namespace std;

int f(int n) {
    if (!n)
        return 1;
    else if (n < 0)
        return 0;
    else {
        int ret = 0;
        for (int i = 1; i <= 3; ++i)
            ret += f(n - i);

        return ret;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        cout << f(n) << '\n';
    }

    return 0;
}
