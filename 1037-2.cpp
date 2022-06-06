//
// Created by Minchan Kim on 2022/05/19.
//
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int cnt;
    cin >> cnt;

    int max = 0, min = 1000001;
    for (int i = 0; i < cnt; ++i) {
        int num;
        cin >> num;
        if (num < min)
            min = num;
        if (num > max)
            max = num;
    }

    cout << max * min;

    return 0;
}
