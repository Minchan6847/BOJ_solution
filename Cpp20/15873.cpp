//
// Created by Minchan Kim on 2022/07/24.
//
// 2,024 KB, 0 ms
#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;

    int sum = 0;

    for (const auto &elem: s) {
        if (elem == '0')
            sum += 9;
        else
            sum += elem - '0';
    }

    cout << sum;

    return 0;
}
