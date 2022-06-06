//
// Created by Minchan Kim on 2022/05/15.
//
#include <iostream>
#include <algorithm>

using namespace std;

bool lessCoor(int *&a, int *&b) {
    if (a[0] < b[0])
        return true;
    else if (a[0] == b[0])
        return a[1] < b[1];
    else
        return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    int **arr = new int *[N];
    for (int i = 0; i < N; ++i)
        arr[i] = new int[2];

    for (int i = 0; i < N; ++i)
        cin >> arr[i][0] >> arr[i][1];

    sort(arr, arr + N, lessCoor);

    for (int i = 0; i < N; ++i)
        cout << arr[i][0] << ' ' << arr[i][1] << '\n';

    return 0;
}
