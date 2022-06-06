//
// Created by Minchan Kim on 2022/05/11.
//
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T = 0;
    cin >> T;

    int k = 0, n = 0;
    for (int i = 0; i < T; ++i) {
        cin >> k >> n;

        int **arr = new int *[k + 1];
        for (int j = 0; j <= k; ++j) {
            arr[j] = new int[n + 1];
        }

        for (int j = 1; j <= n; ++j) {
            arr[0][j] = j;
        }

        for (int j = 1; j <= k; ++j) {
            int sum = 0;
            for (int l = 1; l <= n; ++l) {
                sum += arr[j - 1][l];
                arr[j][l] = sum;
            }
        }

        cout << arr[k][n] << "\n";
        for (int j = 0; j <= k; ++j) {
            delete[] arr[j];
        }
        delete[] arr;
    }

    return 0;
}
