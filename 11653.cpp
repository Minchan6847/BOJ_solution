//
// Created by Minchan Kim on 2022/05/12.
//
// prime check + no square root
//------------ memory: 41040 KB, time: 324 ms ------------//
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N = 0;
    cin >> N;

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

    int division = 2;
    while (N > 1) {
        if (is_prime[division]) {
            while (!(N % division)) {
                N /= division;
                cout << division << '\n';
            }
        }
        division++;
    }

    return 0;
}
