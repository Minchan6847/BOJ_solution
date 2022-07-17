//
// Created by Minchan Kim on 2022/07/17.
//
// 2,020 KB, 0 ms
#include <iostream>

using namespace std;

int minimum = 101, sum = 0;

void f(const int &n) {
    for (int i = 0; i < n; ++i) {
        int score;
        cin >> score;
        sum += score;
        if (score < minimum)
            minimum = score;
    }
}

int main() {
    f(4);
    sum -= minimum;

    minimum = 101;
    f(2);
    sum -= minimum;

    cout << sum;

    return 0;
}
