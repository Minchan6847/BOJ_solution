//
// Created by Minchan Kim on 2022/07/14.
//
// 2,020 KB, 0 ms
#include <iostream>

using namespace std;

int main() {
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;
    cout << min(a, min(b, c)) + min(x, y) - 50;

    return 0;
}
