//
// Created by Minchan Kim on 2022/05/07.
//
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int C = 0;
    cin >> C;
    int N = 0, sum = 0, cnt = 0;
    double avg = 0.0;

    cout << fixed;
    cout.precision(3);

    for (int i = 0; i < C; ++i) {
        cin >> N;
        int *score = new int[N];
        for (int j = 0; j < N; ++j) {
            cin >> score[j];
            sum += score[j];
        }
        avg = static_cast<double>(sum) / static_cast<double>(N);
        for (int j = 0; j < N; ++j) {
            if (score[j] > avg)
                cnt++;
        }
        cout << cnt * 100.0 / N << "%\n";

        sum = 0;
        cnt = 0;
        delete[] score;
    }

    return 0;
}
