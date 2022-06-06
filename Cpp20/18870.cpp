//
// Created by Minchan Kim on 2022/05/16.
//
// memory: 41,120 KB, time: 684 ms
#include <iostream>
#include <algorithm>

using namespace std;

bool lessCoorVal(int *&a, int *&b) {
    return a[1] < b[1];
}

bool lessCoorIndex(int *&a, int *&b) {
    return a[0] < b[0];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N = 0;
    cin >> N;

    // arr[][0]: i, arr[][1]: X_i, arr[][2]: X'_i
    int **arr = new int *[N];
    for (int i = 0; i < N; ++i)
        arr[i] = new int[3];

    for (int i = 0; i < N; ++i) {
        arr[i][0] = i;
        cin >> arr[i][1];
    }

    sort(arr, arr + N, lessCoorVal);

    arr[0][2] = 0;
    int cnt = 0;
    for (int i = 1; i < N; ++i) {
        if (arr[i - 1][1] != arr[i][1])
            cnt++;
        arr[i][2] = cnt;
    }

    sort(arr, arr + N, lessCoorIndex);

    for (int i = 0; i < N; ++i)
        cout << arr[i][2] << ' ';

    return 0;
}
