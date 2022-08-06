//
// Created by Minchan Kim on 2022/08/06.
//
// 2,024 KB, 0 ms
#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;

    double res;
    switch (s[0]) {
        case 'A':
            res = 4;
            break;
        case 'B':
            res = 3;
            break;
        case 'C':
            res = 2;
            break;
        case 'D':
            res = 1;
            break;
        default:
            res = 0;
            break;
    }

    if (s.size() > 1) {
        switch (s[1]) {
            case '+':
                res += 0.3;
                break;
            case '-':
                res -= 0.3;
                break;
            default:
                break;
        }
    }

    cout << fixed;
    cout.precision(1);
    cout << res;

    return 0;
}
