//
// Created by Minchan Kim on 2022/05/12.
//
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 1; i <= 7; ++i) {
        for (int j = 0; j < i; ++j) {
            cout << j + 1;
        }
        for (int j = 0; j < 7 - i; ++j) {
            cout << '*';
        }
        cout << '\n';
    }

    return 0;
}
