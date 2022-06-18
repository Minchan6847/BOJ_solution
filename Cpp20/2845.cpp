//
// Created by Minchan Kim on 2022/06/18.
//
// 2,020 KB, 0 ms
#include <iostream>

using namespace std;

int main() {
    int L, P;
    cin >> L >> P;
    int solution = L * P;
    for (int i = 0; i < 5; ++i) {
        int temp;
        cin >> temp;
        cout << temp - solution << ' ';
    }

    return 0;
}
