//
// Created by Minchan Kim on 2022/05/31.
//
// reference: https://cocoon1787.tistory.com/147
// 3,688 KB, 28 ms
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;

    vector<pair<int, int>> v;
    while (N--) {
        int start, stop;
        cin >> start >> stop;
        v.emplace_back(stop, start);
    }
    sort(v.begin(), v.end());

    int position = 0;
    int cnt = 0;
    for (const auto &elem: v) {
        if (elem.second >= position) {
            position = elem.first;
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}

/*
제출번호: 44108159, ID: chansol
2,808 KB, 24 ms

#include <bits/stdc++.h>

#define all(v) v.begin(), v.end()

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<ld, ld> pld;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ld> vld;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<pld> vpld;
typedef unordered_map<int, int> mpii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	vpii vec(n);
	for (auto &[a, b] : vec) cin >> a >> b;

	sort(all(vec), [](const auto &a, const auto &b) {
		if (a.second == b.second) return a.first < b.first;
		return a.second < b.second;
	});

	int prv = -1, ans = 0;
	for (const auto &[a, b] : vec) {
		if (prv <= a) {
			ans++;
			prv = b;
		}
	}

	cout << ans;
}

 */