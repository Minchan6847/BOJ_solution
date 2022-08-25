//
// Created by Minchan Kim on 2022/08/26.
//
// 2,020 KB, 0 ms
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;

    for (int i = 0; i < N / 4; ++i)
        cout << "long ";

    cout << "int";

    return 0;
}
