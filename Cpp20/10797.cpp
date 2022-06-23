//
// Created by Minchan Kim on 2022/06/23.
//
// 2,020 KB, 0 ms
#include <iostream>

using namespace std;

int main() {
    int day;
    cin >> day;

    int res = 0;
    for (int i = 0; i < 5; ++i) {
        int num;
        cin >> num;
        if (day == num)
            res++;
    }

    cout << res;

    return 0;
}
