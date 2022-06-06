//
// Created by Minchan Kim on 2022/05/18.
//
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    double W, H;
    cin >> N >> W >> H;

    int max = static_cast<int>(sqrt(W * W + H * H));
    for (int i = 0; i < N; ++i) {
        int len;
        cin >> len;
        cout << (len <= max ? "DA" : "NE") << '\n';
    }

    return 0;
}
