//
// Created by Minchan Kim on 2022/06/09.
//
// 2,156 KB, 0 ms
#include <iostream>
#include <vector>

using namespace std;

bool isSame(const int &width, const int &r, const int &c, vector<vector<int>> &v) {
    int temp = v[r][c];
    for (int i = r; i < r + width; ++i)
        for (int j = c; j < c + width; ++j)
            if (temp != v[i][j])
                return false;
    return true;
}

void f(const int &width, const int &r, const int &c, vector<vector<int>> &v) {
    if (width == 1)
        cout << v[r][c];
    else {
        if (isSame(width, r, c, v))
            cout << v[r][c];
        else {
            int half = width / 2;
            cout << '(';
            f(half, r, c, v);
            f(half, r, c + half, v);
            f(half, r + half, c, v);
            f(half, r + half, c + half, v);
            cout << ')';
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;

    vector<vector<int>> v(N, vector<int>(N, 0));
    for (int i = 0; i < N; ++i) {
        string s;
        cin >> s;
        for (int j = 0; j < N; ++j)
            if (s[j] == '1')
                v[i][j] = 1;
    }

    f(N, 0, 0, v);

    return 0;
}
