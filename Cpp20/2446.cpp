//
// Created by Minchan Kim on 2022/08/01.
//
// 2,020 KB, 0 ms
#include <iostream>

using namespace std;

void f(const int &i, const int &N) {
    for (int j = 0; j < i; ++j)
        cout << ' ';
    for (int j = 0; j < 2 * (N - 1 - i) + 1; ++j)
        cout << '*';
    cout << '\n';
}

int main() {

    int N;
    cin >> N;

    for (int i = 0; i < N; ++i)
        f(i, N);
    for (int i = N - 2; i >= 0; --i)
        f(i, N);

    return 0;
}
