//
// Created by Minchan Kim on 2022/05/12.
//
#include <iostream>
#include <cmath>

#define MAX 123456*2

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

    int n = 0, cnt = 0;
    while (true) {
        cin >> n;
        if (!n)
            break;

        cnt = 0;
        for (int num = n + 1; num <= 2 * n; ++num) {
            if (!not_prime[num])
                cnt++;
        }
        cout << cnt << '\n';
    }

    return 0;
}
