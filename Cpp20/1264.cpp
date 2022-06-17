//
// Created by Minchan Kim on 2022/06/17.
//
// O(S)
// S: size of string <= 255
// 2,024 KB, 0 ms
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true) {
        string s;
        getline(cin, s);

        if (s[0] == '#')
            break;

        int cnt = 0;
        for (const auto &elem: s) {
            switch (elem) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                    cnt++;
                    break;
                default:
                    break;
            }
        }
        cout << cnt << '\n';
    }

    return 0;
}

/*
aeiou AEIOU
aeiou AEIOU aeiou AEIOU
#
10
20
 */
