//
// Created by Minchan Kim on 2022/05/24.
//
// 5,928 KB, 4 ms
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> dp(N + 1, 0);

    for (int i = 2; i <= N; ++i) {
        if (i % 2) {
            if (i % 3)
                dp[i] = dp[i - 1];
            else
                dp[i] = min(dp[i - 1], dp[i / 3]);
        } else {
            if (i % 3)
                dp[i] = min(dp[i - 1], dp[i / 2]);
            else
                dp[i] = min(min(dp[i - 1], dp[i / 2]), dp[i / 3]);
        }
        dp[i]++;
    }

    cout << dp[N];

    return 0;
}

/*
5,928 KB, 4 ms
제출 번호: 43702185, ID: values819
#include<bits/stdc++.h>
using namespace std;
int dp[1000005];
int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;

	cin >> n;

	dp[1] = 0;

	for(int i=2; i<=n; i++){
		dp[i] = dp[i-1] + 1;
		if(i%2 == 0) dp[i] = min(dp[i/2] + 1, dp[i]);
		if(i%3 == 0) dp[i] = min(dp[i/3] + 1, dp[i]);
	}
	cout << dp[n] << endl;
}
 */