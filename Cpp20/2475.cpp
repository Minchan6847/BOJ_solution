//
// Created by Minchan Kim on 2022/05/30.
//
#include <iostream>

using namespace std;

int main() {
    int res = 0, temp;
    for (int i = 0; i < 5; ++i) {
        cin >> temp;
        res += (temp * temp) % 10;
    }

    cout << res % 10;

    return 0;
}
