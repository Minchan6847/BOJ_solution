//
// Created by Minchan Kim on 2022/05/13.
//
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N = 0, M = 0;
    cin >> N >> M;

    int *arr = new int[N];
    for (int i = 0; i < N; ++i)
        cin >> arr[i];

    int max = 0;

    int sum = 0;
    for (int i = 0; i < N; ++i)
        for (int j = i + 1; j < N; ++j)
            for (int k = j + 1; k < N; ++k) {
                sum = arr[i] + arr[j] + arr[k];
                if (sum > max && sum <= M)
                    max = sum;
            }

    cout << max;

    return 0;
}
