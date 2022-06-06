//
// Created by Minchan Kim on 2022/05/15.
//
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    const int kMax = 10000;
    int N = 0;
    cin >> N;

    int cnt[kMax + 1] = {0,};
    int temp = 0;
    for (int i = 0; i < N; ++i) {
        cin >> temp;
        cnt[temp]++;
    }

    for (int i = 1; i <= kMax; ++i)
        while (cnt[i]-- > 0)
            cout << i << '\n';

    return 0;
}
