//
// Created by Minchan Kim on 2022/05/11.
//
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N = 0;
    cin >> N;

    int cnt = N / 5;
    while (cnt >= 0) {
        if (!((N - cnt * 5) % 3)) {
            cout << cnt + (N - cnt * 5) / 3;
            return 0;
        } else
            cnt--;
    }
    cout << -1;

    return 0;
}
