//
// Created by Minchan Kim on 2022/05/21.
//
// memory: 2020 KB, time: 3364 ms
#include <iostream>
#include <vector>

using namespace std;

int isPromising(const int &N, const int &row, const int &col, vector<vector<int>> &board) {
    for (int i = 1; i < row; ++i) {
        if (board[row - i][col])
            return 0;
        if (col - i >= 1)
            if (board[row - i][col - i])
                return 0;
        if (col + i <= N)
            if (board[row - i][col + i])
                return 0;
    }
    return 1;
}

void dfs(int &res, const int &N, const int &row, vector<vector<int>> &board) {
    if (row > N) {
        res++;
    } else {
        for (int col = 1; col <= N; ++col) {
            if (isPromising(N, row, col, board)) {
                board[row][col] = 1;
                dfs(res, N, row + 1, board);
                board[row][col] = 0;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    vector<vector<int>> board(N + 1, vector<int>(N + 1, 0));

    // 대칭성
    int res = 0;
    for (int col = 1; col <= N / 2; ++col) {
        board[1][col] = 1;
        dfs(res, N, 2, board);
        board[1][col] = 0;
    }
    res *= 2;

    if (N % 2) {
        board[1][N / 2 + 1] = 1;
        dfs(res, N, 2, board);
        board[1][N / 2 + 1] = 0;
    }

    cout << res;

    return 0;
}
