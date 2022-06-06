//
// Created by Minchan Kim on 2022/05/19.
//
#include <iostream>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int res = 1;
    for (int i = 0; i < K; ++i) {
        res *= N--;
    }
    while (K) {
        res /= K--;
    }

    cout << res;

    return 0;
}
