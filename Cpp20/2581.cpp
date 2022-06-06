//
// Created by Minchan Kim on 2022/05/12.
//
//---------- memory: 2020 KB, time: 20 ms ----------//
#include <iostream>

using namespace std;

bool isPrime(const int &num) {
    if (num == 1)
        return false;

    int divisor = 2;
    while (num > divisor) {
        if (!(num % divisor))
            return false;
        divisor++;
    }

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int M = 0, N = 0;
    cin >> M >> N;

    int num = 0, sum = 0, min = 0;
    bool no_prime = true;
    for (int i = 0; i < N - M + 1; ++i) {
        num = M + i;
        if (isPrime(num)) {
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
        cout << sum << "\n" << min;

    return 0;
}
