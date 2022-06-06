//
// Created by Minchan Kim on 2022/05/26.
//
// reference: https://velog.io/@emplam27/알고리즘-그림으로-알아보는-LCS-알고리즘-Longest-Common-Substring와-Longest-Common-Subsequence
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s[2];
    cin >> s[0] >> s[1];

    vector<vector<int>> LCS(s[0].size() + 1, vector<int>(s[1].size() + 1, 0));

    for (int i = 1; i <= s[0].size(); ++i) {
        for (int j = 1; j <= s[1].size(); ++j) {
            if (s[0][i - 1] == s[1][j - 1])
                LCS[i][j] = LCS[i - 1][j - 1] + 1;
            else
                LCS[i][j] = max(LCS[i][j - 1], LCS[i - 1][j]);
        }
    }

    cout << LCS[s[0].size()][s[1].size()];


    // debugging
    cout << '\n';
    cout << "    ";
    for (const auto &elem: s[1])
        cout << elem << ' ';
    cout << '\n';
    for (int i = 0; i <= s[0].size(); ++i) {
        if (!i)
            cout << "  ";
        else
            cout << s[0][i - 1] << ' ';

        for (int j = 0; j <= s[1].size(); ++j) {
            cout << LCS[i][j] << ' ';
        }
        cout << '\n';
    }
    // debugging - END

    return 0;
}
