//
// Created by Minchan Kim on 2022/05/21.
//
// memory: 2020 KB, time: 0 ms
#include <iostream>
#include <vector>

using namespace std;

void dfs(const int &N, const int &depth, int &min, int &max, const vector<int> &A, vector<int> &num_of_oper,
         vector<int> &oper_list) {
    if (depth == N) {
        int temp = A[0];
        for (int i = 0; i < N - 1; ++i) {
            switch (oper_list[i]) {
                case 0:
                    temp += A[i + 1];
                    break;
                case 1:
                    temp -= A[i + 1];
                    break;
                case 2:
                    temp *= A[i + 1];
                    break;
                case 3:
                    temp /= A[i + 1];
                    break;
                default:
                    break;
            }
        }
        if (min > temp)
            min = temp;
        if (max < temp)
            max = temp;
    } else {
        for (int i = 0; i < 4; ++i) {
            if (num_of_oper[i]) {
                num_of_oper[i]--;
                oper_list[depth - 1] = i;
                dfs(N, depth + 1, min, max, A, num_of_oper, oper_list);
                num_of_oper[i]++;
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

    vector<int> A(N);
    for (int i = 0; i < N; ++i)
        cin >> A[i];

    vector<int> num_of_oper(4);
    for (int i = 0; i < 4; ++i)
        cin >> num_of_oper[i];

    int min = 1'000'000'001, max = -1'000'000'001;
    vector<int> oper_list(N - 1);
    dfs(N, 1, min, max, A, num_of_oper, oper_list);

    cout << max << '\n' << min;

    return 0;
}

/*
// 제출번호: 43586799, ID: ayt0913
// memory: 2020 KB, time: 0 ms
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, max_result = -1000000000, min_result = 1000000000;
int A[12];
int sign[4];

void dfs(int n, int sum) {
    if (n == N) {
        max_result = max(max_result, sum);
        min_result = min(min_result, sum);

        return;
    }

    for (int i = 0; i < 4; i++) {
        if (sign[i] == 0) continue;

        sign[i]--;
        switch (i) {
        case 0:
            dfs(n + 1, sum + A[n]);
            break;
        case 1:
            dfs(n + 1, sum - A[n]);
            break;
        case 2:
            dfs(n + 1, sum * A[n]);
            break;
        case 3:
            dfs(n + 1, sum / A[n]);
            break;
        }
        sign[i]++;
    }
}

void solution() {
    dfs(1, A[0]);

    cout << max_result << "\n" << min_result;
}

int main() {
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> A[i];

    for (int i = 0; i < 4; i++)
        cin >> sign[i];

    solution();

    return 0;
}
 */