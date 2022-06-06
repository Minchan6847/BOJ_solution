//
// Created by Minchan Kim on 2022/05/29.
//
// 23,568 KB, 108 ms
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string S;
    int q;
    cin >> S >> q;

    // cnt[i][j]: 0 ~ j번째 문자까지의 i번째 문자(0번째: a, 1번째: b, ...)의 개수 (j번째 포함)
    vector<vector<int>> cnt(26, vector<int>(S.size() + 1, 0));
    for (int i = 0; i < 26; ++i) {
        int cnt_temp = 0;
        for (int j = 0; j < S.size(); ++j) {
            if (S[j] == 97 + i)
                cnt_temp++;
            cnt[i][j] = cnt_temp;
        }
    }

    while (q--) {
        char a;
        int l, r;
        cin >> a >> l >> r;

        if (!l)
            cout << cnt[a - 97][r] << '\n';
        else
            cout << cnt[a - 97][r] - cnt[a - 97][l - 1] << '\n';
    }

    return 0;
}
