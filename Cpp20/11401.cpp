//
// Created by Minchan Kim on 2022/06/10.
//
// reference: https://velog.io/@kasterra/큰-수의-이항-계수-mod-K-구하는-방법
// 페르마의 소정리
// 2,020 KB, 12 ms
#include <iostream>

using namespace std;

long long f(const long long &base, const long long &exponent, const long long &p) {
    if (exponent == 1)
        return base % p;
    else {
        long long temp = f(base, exponent / 2, p);
        if (exponent % 2)
            return (((temp * temp) % p) * (base % p)) % p;
        else
            return (temp * temp) % p;
    }
}

int main() {
    long long N, K;
    cin >> N >> K;

    K = min(K, N - K);

    //p = 1'000'000'007 (prime number)
    //(N * N-1 * ... N-k+1)%p * ((K!)^(p-2))%p
    long long res = 1ll;
    long long p = 1'000'000'007ll;
    for (long long i = N; i >= N - K + 1; --i)
        res = (res * i) % p;

    if (K > 1) {
        long long temp = 1;
        for (long long i = 2; i <= K; ++i)
            temp = (temp * i) % p;
        res = (res * f(temp, p - 2ll, p)) % p;
    }

    cout << res;

    return 0;
}

/*

4000000 2000000
303317497
 */
