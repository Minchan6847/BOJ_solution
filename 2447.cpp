//
// Created by Minchan Kim on 2022/05/13.
//
// fractal
// memory: 6776 KB, time: 120 ms
#include <iostream>

using namespace std;

void judgeBlank(int n, char **arr, int row_position, int col_position) {
    for (int i = row_position + n / 3; i < row_position + n * 2 / 3; ++i)
        for (int j = col_position + n / 3; j < col_position + n * 2 / 3; ++j)
            arr[i][j] = ' ';

    if (n == 3)
        return;

    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            //if (i != 1 || j != 1) // if uncomment, 120 ms -> 128 ms
            judgeBlank(n / 3, arr, row_position + i * n / 3, col_position + j * n / 3);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N = 0;
    cin >> N;

    char **arr = new char *[N];
    for (int i = 0; i < N; ++i)
        arr[i] = new char[N];

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            arr[i][j] = '*';

    judgeBlank(N, arr, 0, 0);

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j)
            cout << arr[i][j];
        cout << '\n';
    }

    for (int i = 0; i < N; ++i)
        delete[] arr[i];
    delete[] arr;

    return 0;
}
