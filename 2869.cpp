//
// Created by Minchan Kim on 2022/05/11.
//
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T = 0;
    cin >> T;

    int H = 0, W = 0, N = 0;
    for (int i = 0; i < T; ++i) {
        cin >> H >> W >> N;
        cout << ((N - 1) % H + 1) * 100 + ((N - 1) / H + 1) << "\n";
    }

    return 0;
}
/*
while (N > H) {
    N -= H;
    cnt++;
}
cout << N * 100 + cnt << "\n";
cnt = 1;
 */