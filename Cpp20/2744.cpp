//
// Created by Minchan Kim on 2022/08/04.
//
// 2,020 KB, 0 ms
#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;

    for (const auto &elem: s) {
        if (elem <= 90) // 65: A, 90: Z, 97: a, 122: z
            cout << static_cast<char>(elem + 32);
        else
            cout << static_cast<char>(elem - 32);
    }

    return 0;
}
