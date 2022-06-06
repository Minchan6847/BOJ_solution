//
// Created by Minchan Kim on 2022/05/14.
//
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N = 0;
    cin >> N;

    int **arr = new int *[N];
    for (int i = 0; i < N; ++i) {
        arr[i] = new int[3];
        arr[i][2] = 1;
    }

    for (int i = 0; i < N; ++i)
        cin >> arr[i][0] >> arr[i][1];

    for (int i = 0; i < N; ++i)
        for (int j = i + 1; j < N; ++j) {
            if (arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1])
                arr[i][2]++;
            else if (arr[i][0] > arr[j][0] && arr[i][1] > arr[j][1])
                arr[j][2]++;
        }

    for (int i = 0; i < N; ++i)
        cout << arr[i][2] << ' ';

    for (int i = 0; i < N; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
