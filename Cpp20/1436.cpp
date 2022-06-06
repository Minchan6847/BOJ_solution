//
// Created by Minchan Kim on 2022/05/14.
//
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N = 0;
    cin >> N;

    int ans = 665;
    while (N > 0) {
        ans++;
        for (int i = ans; i >= 666; i /= 10) {
            if (i % 1000 == 666) {
                N--;
                break;
            }
        }
    }

    cout << ans;

    return 0;
}
