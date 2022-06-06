//
// Created by Minchan Kim on 2022/05/19.
//
#include <iostream>

using namespace std;

int gcd(const int &m, const int &n) {
    //return m % n ? gcd(n, m % n) : n;
    return n == 0 ? m : gcd(n, m % n);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int A, B;
        cin >> A >> B;
        cout << A * B / gcd(A, B) << '\n';
    }

    return 0;
}
