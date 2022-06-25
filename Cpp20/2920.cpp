//
// Created by Minchan Kim on 2022/06/25.
//
// 2,020 KB, 0 ms
#include <iostream>

using namespace std;

int main() {
    int pre_num;
    cin >> pre_num;

    if (pre_num == 1) {
        bool is_mixed = false;
        for (int i = 0; i < 7; ++i) {
            int num;
            cin >> num;
            if (pre_num + 1 != num) {
                is_mixed = true;
                break;
            }
            pre_num = num;
        }

        if (is_mixed)
            cout << "mixed";
        else
            cout << "ascending";

    } else if (pre_num == 8) {
        bool is_mixed = false;
        for (int i = 0; i < 7; ++i) {
            int num;
            cin >> num;
            if (pre_num - 1 != num) {
                is_mixed = true;
                break;
            }
            pre_num = num;
        }

        if (is_mixed)
            cout << "mixed";
        else
            cout << "descending";

    } else
        cout << "mixed";

    return 0;
}
