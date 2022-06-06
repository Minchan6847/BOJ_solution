//
// Created by Minchan Kim on 2022/05/12.
//
// square root
//------------ memory: 2032 KB, time: 0 ms ------------//
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N = 0;
    cin >> N;

    int division = 2;
    while (N > 1) {
        if (division > sqrt(N)) {
            cout << N;
            break;
        }
        while (!(N % division)) {
            N /= division;
            cout << division << '\n';
        }

        division++;
    }

    return 0;
}
