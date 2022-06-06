//
// Created by Minchan Kim on 2022/05/08.
//
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T = 0;
    cin >> T;

    int R = 0;
    string S("");
    for (int i = 0; i < T; ++i) {
        cin >> R >> S;
        for (string::const_iterator citr = S.cbegin(); citr != S.cend(); ++citr) {
            for (int j = 0; j < R; ++j) {
                cout << *citr;
            }
        }
        cout << "\n";
    }

    return 0;
}
