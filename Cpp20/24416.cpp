//
// Created by Minchan Kim on 2022/06/15.
//
// O(2^n)
// 2,020 KB, 136 ms
#include <iostream>

using namespace std;

int fibo(const int &n) {
    if (n == 1 || n == 2)
        return 1;
    else
        return fibo(n - 1) + fibo(n - 2);
}

int main() {
    int n;
    cin >> n;

    cout << fibo(n) << ' ' << n - 2;

    return 0;
}
