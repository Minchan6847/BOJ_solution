//
// Created by Minchan Kim on 2022/05/28.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, K;
    cin >> N >> K;

    int sum = 0;
    vector<int> temperature(N, 0);
    for (int i = 0; i < K; ++i) {
        cin >> temperature[i];
        sum += temperature[i];
    }

    int max = sum;
    for (int i = K; i < N; ++i) {
        sum -= temperature[i - K];
        cin >> temperature[i];
        sum += temperature[i];

        if (max < sum)
            max = sum;
    }

    cout << max;

    return 0;
}
