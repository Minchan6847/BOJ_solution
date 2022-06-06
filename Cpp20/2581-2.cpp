//
// Created by Minchan Kim on 2022/05/12.
//
//---------- memory: 2180 KB, time: 0 ms ----------//
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int M = 0, N = 0;
    cin >> M >> N;

    int *is_prime = new int[N + 1];
    for (int i = 0; i <= N; ++i) {
        is_prime[i] = 1;
    }

    is_prime[0] = 0;
    is_prime[1] = 0;
    for (int i = 2; i <= N; ++i) {
        if (!is_prime[i])
            continue;
        for (int j = i * 2; j <= N; j += i) {
            is_prime[j] = 0;
        }
    }

    int sum = 0, min = 0;
    bool no_prime = true;
    for (int num = M; num <= N; ++num) {
        if (is_prime[num]) {
            sum += num;
            if (no_prime) {
                min = num;
                no_prime = false;
            }
        }
    }

    if (no_prime)
        cout << -1;
    else
        cout << sum << '\n' << min;

    return 0;
}
