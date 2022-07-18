//
// Created by Minchan Kim on 2022/07/18.
//
// 2,024 KB, 0 ms
#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    s = ":" + s + ":";

    string f = ":fan:";
    cout << f << f << f << '\n';
    cout << f << s << f << '\n';
    cout << f << f << f;

    return 0;
}
