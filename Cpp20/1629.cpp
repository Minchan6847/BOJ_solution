//
// Created by Minchan Kim on 2022/06/09.
//
// O(logB)
// 2,020 KB, 0 ms
#include <iostream>

using namespace std;

// A^B = A^(B/2) * A^(B/2) = ...
long long f(const long long &A, const long long &B, const long long &C) {
    if (B == 1)
        return A % C;
    else {
        long long temp = f(A, B / 2, C);
        if (B % 2)
            return (((temp * temp) % C) * (A % C)) % C;
        else
            return (temp * temp) % C;
    }
}

int main() {
    long long A, B, C;
    cin >> A >> B >> C;
    cout << f(A, B, C);

    return 0;
}
