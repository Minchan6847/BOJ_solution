//
// Created by Minchan Kim on 2022/05/06.
//
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T = 0;
    cin >> T;

    int a, b = 0;
    for (int i = 1; i <= T; ++i) {
        cin >> a >> b;
        cout << "Case #" << i << ": " << a << " + " << b << " = " << a + b << "\n";
    }

    return 0;
}
