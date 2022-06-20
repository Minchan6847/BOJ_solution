//
// Created by Minchan Kim on 2022/06/20.
//
// 2,020 KB, 0 ms
#include <iostream>

using namespace std;

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    int sum = A + B + C + D;
    cout << sum / 60 << '\n' << sum % 60;

    return 0;
}
