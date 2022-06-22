//
// Created by Minchan Kim on 2022/06/22.
//
// 2,020 KB, 0 ms
#include <iostream>

using namespace std;

int main() {
    int res = -1;
    for (int i = 0; i < 2; ++i) {
        int sum = 0;
        for (int j = 0; j < 4; ++j) {
            int temp;
            cin >> temp;
            sum += temp;
        }
        if (res < sum)
            res = sum;
    }

    cout << res;

    return 0;
}
