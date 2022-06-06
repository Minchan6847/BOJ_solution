//
// Created by Minchan Kim on 2022/06/04.
//
// 2,156 KB, 0 ms
#include <iostream>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;

    multiset<int> s;
    for (int i = 0; i < N; ++i) {
        int temp;
        cin >> temp;
        s.emplace(temp);
    }

    int sum = 0, res = 0;
    for (const auto &elem: s) {
        sum += elem;
        res += sum;
    }

    cout << res;

    return 0;
}

/*
제출번호: 44161957, ID: widms12
2,020 KB, 0 ms

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
	int n;
	cin >> n;
	vector<int>line;

	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		line.push_back(k);
	}
	sort(line.begin(), line.end());

	int answer = 0;
	for (int i = 0; i < n; i++) {
		answer += line[i] * (n-i);
	}
	cout << answer;

}

 */