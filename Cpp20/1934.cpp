//
// Created by Minchan Kim on 2022/05/19.
//
#include <iostream>
#include <numeric>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int M, N;
        cin >> M >> N;
        cout << lcm(M, N) << '\n';
    }

    return 0;
}
