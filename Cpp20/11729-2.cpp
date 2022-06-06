//
// Created by Minchan Kim on 2022/05/13.
//
// reference) 제출번호: 43261386, ID: jy0431
// memory: 2020 KB, time: 120 ms
#include <iostream>

using namespace std;

void hanoi(int N, int start, int temp, int destination) {
    if (N == 1) {
        cout << start << ' ' << destination << '\n';
    } else {
        hanoi(N - 1, start, destination, temp);
        cout << start << ' ' << destination << '\n';
        hanoi(N - 1, temp, start, destination);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N = 0;
    cin >> N;

    cout << (1 << N) - 1 << '\n';
    hanoi(N, 1, 2, 3);

    return 0;
}
