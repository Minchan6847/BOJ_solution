//
// Created by Minchan Kim on 2022/05/23.
//
#include <iostream>
#include <vector>

using namespace std;

enum class k {
    MAX = 100
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<long long> P(static_cast<int>(k::MAX) + 1, 0);
    P[1] = 1l;
    P[2] = 1l;
    P[3] = 1l;
    P[4] = 2l;
    P[5] = 2l;

    for (int i = 6; i <= static_cast<int>(k::MAX); ++i)
        P[i] = P[i - 1] + P[i - 5];

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        cout << P[N] << '\n';
    }

    return 0;
}
