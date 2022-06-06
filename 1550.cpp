//
// Created by Minchan Kim on 2022/06/01.
//
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    cin >> s;

    // '0': 48, 'A': 65
    int res = 0;
    int exponent = 0;
    for (auto critr = s.crbegin(); critr != s.crend(); ++critr) {
        if (*critr < 65)
            res += (*critr - 48) << exponent * 4;
        else
            res += (*critr - 55) << exponent * 4;

        exponent++;
    }

    cout << res;

    return 0;
}
