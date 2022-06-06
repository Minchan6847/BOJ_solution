//
// Created by Minchan Kim on 2022/05/12.
//
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N = 0;
    cin >> N;

    int num = 0, ans = 0;
    for (int i = 0; i < N; ++i) {
        cin >> num;
        if (num == 1)
            continue;

        int divisor = 2;
        while (num > divisor) {
            if (!(num % divisor)) {
                ans--;
                break;
            }
            divisor++;
        }
        ans++;
    }

    cout << ans;

    return 0;
}
