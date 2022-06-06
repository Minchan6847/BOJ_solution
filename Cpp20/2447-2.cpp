//
// Created by Minchan Kim on 2022/05/12.
//
// fractal
// reference: https://cryptosalamander.tistory.com/38
// memory: 2020 KB, time: 232 ms
#include <iostream>

using namespace std;

void printChar(int n, int i, int j) {
    if (n == 1)
        cout << '*';
    else {
        if ((i * 3 / n) % 3 == 1 && (j * 3 / n) % 3 == 1)
            cout << ' ';
        else
            printChar(n / 3, i, j);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N = 0;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j)
            printChar(N, i, j);
        cout << '\n';
    }

    return 0;
}
