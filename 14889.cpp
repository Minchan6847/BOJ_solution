//
// Created by Minchan Kim on 2022/05/21.
//
#include <iostream>
#include <vector>

using namespace std;

void
dfs(const int &depth, const int &N, int &min_val, const vector<vector<int>> S, vector<int> &v, vector<int> select) {
    if (depth > N / 2) {
        int sum = 0;
        for (int i = 0; i < N; ++i) {
            for (int j = i + 1; j < N; ++j) {
                if (v[i] && v[j])
                    sum += S[i][j] + S[j][i];
                else if (!v[i] && !v[j])
                    sum -= S[i][j] + S[j][i];
            }
        }
        min_val = min(abs(sum), min_val);
    } else {
        for (int i = select[depth - 1] + 1; i < N; ++i) {
            v[i] = 1;
            select[depth] = i;
            dfs(depth + 1, N, min_val, S, v, select);
            v[i] = 0;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    vector<vector<int>> S(N, vector<int>(N));
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            cin >> S[i][j];

    int min_val = 2'000'000'000;
    vector<int> v(N, 0);
    vector<int> select(N / 2 + 1, 0);
    dfs(1, N, min_val, S, v, select);

    cout << min_val;

    return 0;
}
