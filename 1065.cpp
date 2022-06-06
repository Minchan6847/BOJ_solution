//
// Created by Minchan Kim on 2022/05/08.
//
#include <iostream>

using namespace std;

bool isHansu(int num) {
    if (num < 100)
        return true;

    int difference = num % 10 - num / 10 % 10;
    num /= 10;
    int pre_digit = num % 10;
    num /= 10;
    while (num != 0) {
        if (pre_digit - num % 10 != difference)
            return false;
        pre_digit = num % 10;
        num /= 10;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N = 0;
    cin >> N;

    int ans = 0;
    for (int i = 1; i <= N; ++i) {
        ans += isHansu(i);
    }

    cout << ans;

    return 0;
}
