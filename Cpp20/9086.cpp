//
// Created by Minchan Kim on 2022/08/22.
//
// 2,024 KB, 0 ms
#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string s;
        cin >> s;
        cout << s.front() << s.back() << '\n';
    }

    return 0;
}
