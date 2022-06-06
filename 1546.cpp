//
// Created by Minchan Kim on 2022/05/07.
//
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N = 0;
    cin >> N;

    double *score = new double[N];
    double max = 0.0;
    for (int i = 0; i < N; ++i) {
        cin >> score[i];
        if(score[i] > max)
            max = score[i];
    }

    double sum = 0;
    for (int i = 0; i < N; ++i) {
        sum += score[i] * 100.0 / max;
    }

    cout << sum / N;

    delete[] score;

    return 0;
}
