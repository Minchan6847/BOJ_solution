//
// Created by Minchan Kim on 2022/08/09.
//
// 2,020 KB, 0 ms
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true) {
        int a, b;
        cin >> a >> b;

        if (!a && !b)
            break;

        cout << (a > b ? "Yes\n" : "No\n");
    }

    return 0;
}
