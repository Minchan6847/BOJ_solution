//
// Created by Minchan Kim on 2022/05/18.
//
#include <iostream>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    map<int, int> m[2];

    for (int i = 0; i < 3; ++i) {
        int input;
        for (auto &elem: m) {
            cin >> input;
            elem[input]++;
        }
    }

    for (auto &elem: m)
        for (auto &elem2: elem)
            if (elem2.second == 1)
                cout << elem2.first << ' ';

    return 0;
}
