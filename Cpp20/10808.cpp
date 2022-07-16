//
// Created by Minchan Kim on 2022/07/16.
//
// 2,024 KB, 0 ms
#include <iostream>
#include <vector>

using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> cnt(26, 0);
    for (const auto &elem: s)
        cnt[elem - 97]++;

    for (const auto &elem: cnt)
        cout << elem << ' ';

    return 0;
}
