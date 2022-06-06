//
// Created by Minchan Kim on 2022/06/02.
//
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int D, H, W;
    cin >> D >> H >> W;

    double a = D / sqrt(H * H + W * W);
    cout << static_cast<int>(H * a) << ' ' << static_cast<int>(W * a);

    return 0;
}
