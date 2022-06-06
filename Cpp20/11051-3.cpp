//
// Created by Minchan Kim on 2022/05/20.
//
// memory: 5,872 KB, time: 4 ms
#include <iostream>

using namespace std;

int dp(const int &n, const int &k, int m[][1000]) {
    if (!k || n == k)
        return 1;

    if (!m[n][k])
        m[n][k] = (dp(n - 1, k - 1, m) + dp(n - 1, k, m)) % 10007;

    return m[n][k];
}

// nCk = 10007 * 몫 + Remainder
// => Remainder = nCk - 10007 * 몫
int main() {
    int m[1001][1000] = {0,};

    int N, K;
    cin >> N >> K;
    cout << dp(N, K, m);

    return 0;
}

/*
// 제출번호: 43422156, ID: aeun
// memory: 5,936 KB, time: 0 ms
#include <iostream>

using namespace std;

int N, K;
int DP[1001][1001];

int main(void) {
	ios::sync_with_stdio(false);

	cin >> N >> K;

	DP[0][0] = 1;
	for (int i = 1; i <= N; ++i) {
		DP[i][0] = DP[i][i] = 1;
		for (int j = 1; j < i; ++j) {
			DP[i][j] = DP[i - 1][j - 1] + DP[i - 1][j];
			DP[i][j] %= 10007;
		}
	}

	cout << DP[N][K];

	return 0;
}
 */
