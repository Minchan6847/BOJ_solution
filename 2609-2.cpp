//
// Created by Minchan Kim on 2022/05/19.
//
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M;
    cin >> N >> M;

    int min = N < M ? N : M;

    int GCD = 1;
    while (min > 1) {
        if (!(N % min) && !(M % min)) {
            GCD = min;
            break;
        }
        min--;
    }

    cout << GCD << '\n' << N * M / GCD;

    return 0;
}
