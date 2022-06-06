//
// Created by Minchan Kim on 2022/05/22.
//
#include <iostream>
#include <vector>

using namespace std;

int w(const int &a, const int &b, const int &c, vector<vector<vector<int>>> &v) {
    if (a <= 0 || b <= 0 || c <= 0)
        return 1;
    if (a > 20 || b > 20 || c > 20)
        return w(20, 20, 20, v);

    if (!v[a][b][c]) {
        if (a < b && b < c)
            v[a][b][c] = w(a, b, c - 1, v) + w(a, b - 1, c - 1, v) - w(a, b - 1, c, v);
        else
            v[a][b][c] =
                    w(a - 1, b, c, v) + w(a - 1, b - 1, c, v) + w(a - 1, b, c - 1, v) - w(a - 1, b - 1, c - 1, v);
    }

    return v[a][b][c];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<vector<vector<int>>> v(21, vector<vector<int>>(21, vector<int>(21, 0)));

    while (true) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a == -1 && b == -1 && c == -1)
            break;
        else {
            cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c, v) << '\n';
        }
    }

    return 0;
}
