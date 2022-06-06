//
// Created by Minchan Kim on 2022/05/21.
//
// memory: 2020 KB, time: 352 ms
#include <iostream>
#include <vector>

using namespace std;

int isPromising(const int &candidate, const int &depth, vector<vector<int>> &board, vector<pair<int, int>> &index) {
    for (int i = 0; i < 9; ++i) {
        if ((board[index[depth].first][i] == candidate) ||
            (board[i][index[depth].second] == candidate) ||
            (board[(index[depth].first / 3 * 3) + i / 3][(index[depth].second / 3 * 3) + i % 3] == candidate))
            return 0;
    }
    return 1;
}

int dfs(const int &num_of_blank, const int &depth, vector<vector<int>> &board, vector<pair<int, int>> &index) {
    if (depth == num_of_blank) {
        return 1;
    } else {
        for (int candidate = 1; candidate <= 9; ++candidate) {
            if (isPromising(candidate, depth, board, index)) {
                board[index[depth].first][index[depth].second] = candidate;
                if (dfs(num_of_blank, depth + 1, board, index))
                    return 1;
            }
        }
        board[index[depth].first][index[depth].second] = 0;
        return 0;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<vector<int>> board(9, vector<int>(9, 0));
    vector<pair<int, int>> index;
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            cin >> board[i][j];
            if (!board[i][j])
                index.emplace_back(i, j);
        }
    }
    int num_of_blank = index.size();

    dfs(num_of_blank, 0, board, index);

    for (const auto &elem: board) {
        for (const auto elem2: elem)
            cout << elem2 << ' ';
        cout << '\n';
    }

    return 0;
}
