//
// Created by Minchan Kim on 2022/05/19.
//
#include <iostream>
#include <numeric>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    cout << gcd(M, N) << '\n' << lcm(M, N);

    return 0;
}
