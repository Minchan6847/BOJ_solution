//
// Created by Minchan Kim on 2022/05/12.
//
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int M = 0, N = 0;
    cin >> M >> N;

    int *not_prime = new int[N + 1];
    for (int i = 0; i <= N; ++i) {
        not_prime[i] = 0;
    }

    not_prime[0] = 1;
    not_prime[1] = 1;

    int sqrt_N = sqrt(N);
    for (int i = 2; i <= sqrt_N; ++i) {
        if (not_prime[i])
            continue;
        else
            for (int j = 2 * i; j <= N; j += i) {
                not_prime[j] = 1;
            }
    }

    for (int num = M; num <= N; ++num) {
        if (!not_prime[num])
            cout << num << '\n';
    }

    return 0;
}
