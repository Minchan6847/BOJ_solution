//
// Created by Minchan Kim on 2022/05/12.
//
#include <iostream>
#include <cmath>

#define MAX 10000

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int not_prime[MAX + 1] = {0,};
    not_prime[0] = 1;
    not_prime[1] = 1;

    int sqrt_max = sqrt(MAX);
    for (int i = 2; i <= sqrt_max; ++i) {
        if (not_prime[i])
            continue;
        else
            for (int j = i * 2; j <= MAX; j += i) {
                not_prime[j] = 1;
            }
    }

    int T = 0, n = 0;
    cin >> T;
    for (int i = 0; i < T; ++i) {
        cin >> n;
        for (int j = n / 2; j >= 2; --j) {
            if (!not_prime[j]) {
                if (!not_prime[n - j]) {
                    cout << j << " " << n - j << '\n';
                    break;
                }
            }
        }
    }

    return 0;
}
