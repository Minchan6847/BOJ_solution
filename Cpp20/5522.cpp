//
// Created by Minchan Kim on 2022/08/23.
//
// 2,020 KB, 0 ms
#include <iostream>

using namespace std;

int main() {
    int res = 0;
    for (int i = 0; i < 5; ++i) {
        int A;
        cin >> A;
        res += A;
    }

    cout << res;

    return 0;
}
