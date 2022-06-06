//
// Created by Minchan Kim on 2022/05/20.
//
// memory: 2020 KB, time: 0 ms
#include <iostream>

using namespace std;

int getExponent(const int &n_factorial, const int &exponent) {
    int temp = n_factorial, ret = 0;

    while (temp > 1) {
        temp /= exponent;
        ret += temp;
    }

    return ret;
}

int main() {
    /*
    cout << getExponent(2000000000, 2) << '\n';
    cout << getExponent(1999999999, 2) << '\n';
    cout << getExponent(1900000000, 2) << '\n';
    cout << getExponent(1500000000, 2) << '\n';
    cout << getExponent(1000000000, 2) << '\n';
    cout << getExponent(500000000, 2) << '\n';
    cout << getExponent(50000000, 2) << '\n';
    cout << getExponent(5000000, 2) << '\n';
     */
    int n, m;
    cin >> n >> m;

    int num_of_2 = getExponent(n, 2) - getExponent(n - m, 2) - getExponent(m, 2);
    int num_of_5 = getExponent(n, 5) - getExponent(n - m, 5) - getExponent(m, 5);

    cout << (num_of_2 < num_of_5 ? num_of_2 : num_of_5);

    return 0;
}

/*
// 제출번호: 43568602, ID: toopy16
// memory: 2020 KB, time: 0 ms
#include<iostream>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, m;
    cin >> n >> m;
    if (m > n - m) m = n - m;

    if (m == 1 && n % 5 == 0 && n % 2 != 0) {
        cout << 0;
        return 0;
    }

    ll c2top = 0;
    ll c2bottom = 0;
    ll c5top = 0;
    ll c5bottom = 0;

    for (ll i = 2; i <= n; i *= 2) {
        c2bottom += m / i;
        c2top += n / i;
        c2top -= (n - m) / i;
    }

    for (ll i = 5; i <= n; i *= 5) {
        c5bottom += m / i;
        c5top += n / i;
        c5top -= (n - m) / i;
    }

    ll c5 = c5top - c5bottom;
    ll c2 = c2top - c2bottom;
    ll ans = c2 > c5 ? c5 : c2;

    cout << ans;

    return 0;
}
*/