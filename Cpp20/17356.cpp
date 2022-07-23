//
// Created by Minchan Kim on 2022/07/23.
//
// 2,208 KB, 0 ms
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double A, B;
    cin >> A >> B;
    cout << fixed;
    cout.precision(20);
    cout << 1 / (1 + pow(10, (B - A) / 400));

    return 0;
}
