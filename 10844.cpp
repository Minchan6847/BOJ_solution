//
// Created by Minchan Kim on 2022/05/24.
//
// wrong answer
#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int dp = 9;
    for (int i = 2; i <= N; ++i)
        dp = ((dp * 2) % 1'000'000'000 - i + 1 + 1'000'000'000) % 1'000'000'000;

    cout << dp;

    return 0;
}
