//
// Created by Minchan Kim on 2022/05/22.
//
// time over 예상
#include <iostream>
#include <vector>

using namespace std;

int dp(const int &n, const int &k) {
    if (!k || n == k)
        return 1;

    int temp = dp(n - 1, k - 1) + dp(n - 1, k);
    if (temp >= 15746)
        temp -= 15746;

    return temp;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    int res = 0;
    int n = N, k = 0;
    while (N >= 0) {
        res += dp(n, k);
        if (res >= 15746)
            res -= 15746;
        N -= 2;
        n--;
        k++;
    }

    cout << res;

    return 0;
}
