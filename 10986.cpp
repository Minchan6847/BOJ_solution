//
// Created by Minchan Kim on 2022/05/29.
//
// reference: https://justicehui.github.io/ps/2019/04/04/BOJ10986/
// 2,020 KB, 132 ms
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<long long> cnt(M, 0);
    int sum = 0;
    for (int i = 0; i < N; ++i) {
        int temp;
        cin >> temp;
        sum = (sum + temp % M) % M;
        cnt[sum]++;
    }
    // (1 ≤ N ≤ 10^6, 2 ≤ M ≤ 10^3)
    long long res = cnt[0]; // if 모든 A_i가 0이면 res는 대략 10^12/2 (10^6 * (10^6 - 1) / 2)
    for (int i = 0; i < M; ++i) {
        if (cnt[i] > 1ll)
            res += cnt[i] * (cnt[i] - 1ll) / 2ll;
    }

    cout << res;

    return 0;
}

/*

제출 번호: 43971510, ID: imax
// 2,020 KB, 128 ms
// n * (n-1) / 2 = (0 +) 1 + 2 + ... + (n -1)인 것 이용
// 나머지(x)가 0인 경우는 1 + 2 + ... + n (= n * (n-1) / 2 + n = n * (n + 1) / 2)

#include <iostream>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);

	int n, m, x, before = 0;
	long long int arr[1001] = { 0 }, answer = 0;

	cin >> n >> m;
	while (n--){
		cin >> x;
		x = (x + before) % m;
		arr[x]++;
		answer = answer + arr[x] - (x != 0);
		before = x;
	}
	cout << answer;
	return 0;
}

 */