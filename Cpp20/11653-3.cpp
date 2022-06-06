//
// Created by Minchan Kim on 2022/05/12.
//
//prime check + square root
//------------ memory: 2032 KB, time: 0 ms ------------//
#include <iostream>
#include <cmath>

#define SIZE 3164

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N = 0;
    cin >> N;

    int not_prime[SIZE] = {0,};
    //sqrt(10,000,000) = 3162.28

    not_prime[0] = 1;
    not_prime[1] = 1;
    for (int i = 2; i < SIZE; ++i) {
        if (not_prime[i])
            continue;
        for (int j = i * 2; j < SIZE; j += i) {
            not_prime[j] = 1;
        }
    }

    int division = 2;
    while (N > 1) {
        if (division > sqrt(N)) {
            cout << N;
            break;
        }
        if (!not_prime[division]) {
            while (!(N % division)) {
                N /= division;
                cout << division << '\n';
            }
        }
        division++;
    }

    return 0;
}
