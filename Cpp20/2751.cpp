//
// Created by Minchan Kim on 2022/05/14.
//
// memory: 5928 KB, time: 272 ms
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N = 0;
    cin >> N;

    int *arr = new int[N];
    for (int i = 0; i < N; ++i)
        cin >> arr[i];

    sort(arr, arr + N);

    for (int i = 0; i < N; ++i)
        cout << arr[i] << '\n';

    return 0;
}
