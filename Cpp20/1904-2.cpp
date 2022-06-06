//
// Created by Minchan Kim on 2022/05/22.
//
// 5,928 KB, 8 ms
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    vector<int> v(N + 1, 0);
    v[1] = 1;
    v[2] = 2;

    for (int i = 3; i <= N; ++i)
        v[i] = (v[i - 1] + v[i - 2]) % 15746;

    cout << v[N];

    return 0;
}
