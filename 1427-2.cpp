//
// Created by Minchan Kim on 2022/05/15.
//
#include <iostream>

using namespace std;

int main() {
    int N = 0;
    cin >> N;

    int cnt[10] = {0,};
    for (int i = N; i > 0; i /= 10)
        cnt[i % 10]++;

    for (int i = 9; i >= 0; --i)
        while (cnt[i]-- > 0)
            cout << i;

    return 0;
}
