//
// Created by Minchan Kim on 2022/05/21.
//
#include <iostream>
#include <vector>

using namespace std;

int isPromising(const int &row, const int &col, vector<int> &visited) {
    for (int i = 1; i < row; ++i)
        if (visited[row - i] == col || visited[row - i] == col - i ||
            visited[row - i] == col + i) // memory: 2020 KB, time: 2192 ms
            //if (visited[i] == col || abs(col - visited[row - i]) == i) // memory: 2020 KB, time: 2336 ms
            return 0;

    return 1;
}

void dfs(int &res, const int &N, const int &row, vector<int> &visited) {
    if (row > N) {
        res++;
    } else {
        for (int col = 1; col <= N; ++col) {
            if (isPromising(row, col, visited)) {
                visited[row] = col;
                dfs(res, N, row + 1, visited);
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
    vector<int> visited(N + 1);

    // 대칭성
    int res = 0;
    for (int col = 1; col <= N / 2; ++col) {
        visited[1] = col;
        dfs(res, N, 2, visited);
    }
    res *= 2;

    if (N % 2) {
        visited[1] = N / 2 + 1;
        dfs(res, N, 2, visited);
    }

    cout << res;

    return 0;
}
