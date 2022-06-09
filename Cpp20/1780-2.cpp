//
// Created by Minchan Kim on 2022/06/09.
//
// 20,832 KB, 384 ms
#include <iostream>
#include <vector>

using namespace std;

int f(const int &width, const int &r, const int &c, vector<vector<int>> &v, vector<int> &res) {
    if (width == 1) {
        res[v[r][c] + 1]++;
        return v[r][c];
    } else {
        int a_third = width / 3;
        vector<int> ret(9, 0);
        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < 3; ++j)
                ret[i * 3 + j] = f(a_third, r + a_third * i, c + a_third * j, v, res);

        int temp = ret[0];
        bool is_same = true;
        for (const auto &elem: ret)
            if (temp != elem)
                is_same = false;

        if (is_same) {
            res[ret[0] + 1] -= 8;
            return ret[0];
        } else
            return 2;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;

    vector<vector<int>> v(N, vector<int>(N, 0));
    for (auto &elem: v)
        for (auto &elem2: elem)
            cin >> elem2;

    vector<int> res(3, 0);
    f(N, 0, 0, v, res);

    for (const auto &elem: res)
        cout << elem << '\n';

    return 0;
}
