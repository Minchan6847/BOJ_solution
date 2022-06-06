//
// Created by Minchan Kim on 2022/06/04.
//
// reference: <제출 번호: 17903909, ID: shw2495>
// 2,020 KB, 0 ms
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int res, n, check = 0;
    char op;

    cin >> res;
    while (cin >> op >> n) {
        if (check) {
            res -= n;
        } else if (op == '-') {
            res -= n;
            check = 1;
        } else
            res += n;
    }

    cout << res;

    return 0;
}

// input: 55-50+40\n
// output: -35
