//
// Created by Minchan Kim on 2022/06/19.
//
// 2,020 KB, 0 ms
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double L, A, B, C, D;
    cin >> L >> A >> B >> C >> D;
    cout << L - max(ceil(A / C), ceil(B / D));

    return 0;
}
