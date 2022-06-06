//
// Created by Minchan Kim on 2022/05/13.
//
// memory: 2208 KB, time: 124 ms
#include <iostream>
#include <cmath>

using namespace std;

void hanoi(int N, int start, int destination) {
    if (N == 1) {
        cout << start << ' ' << destination << '\n';
    } else {
        int temp = 0;
        switch (start) {
            case 1:
                temp = destination == 2 ? 3 : 2;
                break;
            case 2:
                temp = destination == 1 ? 3 : 1;
                break;
            case 3:
                temp = destination == 1 ? 2 : 1;
                break;
        }
        hanoi(N - 1, start, temp);
        cout << start << ' ' << destination << '\n';
        hanoi(N - 1, temp, destination);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N = 0;
    cin >> N;

    cout << static_cast<int>(pow(2, N)) - 1 << '\n';
    hanoi(N, 1, 3);

    return 0;
}
