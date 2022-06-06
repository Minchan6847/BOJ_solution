//
// Created by Minchan Kim on 2022/05/07.
//
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A = 0, B = 0, C = 0;
    cin >> A >> B >> C;
    int multi = A * B * C;
    int count[10] = {0,};
    int digit = 0;

    while (multi != 0) {
        digit = multi % 10;
        for (int i = 0; i < 10; ++i) {
            if (digit == i) {
                count[i]++;
                break;
            }
        }
        multi /= 10;
    }

    for (int i = 0; i < 10; ++i) {
        cout << count[i] << "\n";
    }

    return 0;
}
