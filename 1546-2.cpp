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

    int input = 0, sum = 0, max = 0;
    for (int i = 0; i < N; ++i) {
        cin >> input;
        if (input > max)
            max = input;
        sum += input;
    }

    //cout << static_cast<double>(sum) * 100.0 / static_cast<double>(max) / static_cast<double>(N);
    cout << sum * 100.0 / max / N;

    return 0;
}
