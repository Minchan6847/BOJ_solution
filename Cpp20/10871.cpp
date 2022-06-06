//
// Created by Minchan Kim on 2022/05/06.
//
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N = 0, X = 0;
    cin >> N >> X;

    int a = 0;
    for (int i = 0; i < N; ++i) {
        cin >> a;
        if (a < X)
            cout << a << " ";
    }

    return 0;
}
