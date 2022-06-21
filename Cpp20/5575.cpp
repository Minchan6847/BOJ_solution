//
// Created by Minchan Kim on 2022/06/21.
//
// 2,020 KB, 0 ms
#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i < 3; ++i) {
        int h1, m1, s1, h2, m2, s2;
        cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;

        if (s2 < s1) {
            m2--;
            s2 += 60;
        }
        if (m2 < m1) {
            h2--;
            m2 += 60;
        }

        cout << h2 - h1 << ' ' << m2 - m1 << ' ' << s2 - s1 << '\n';
    }

    return 0;
}
