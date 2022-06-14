//
// Created by Minchan Kim on 2022/06/15.
//
// O(N * log r) / maximum of r: 10^9
// 5,928 KB, 156 ms
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    long long M;
    cin >> N >> M;
    // (1 ≤ N ≤ 1,000,000, 1 ≤ M ≤ 2,000,000,000)

    int l = 0;
    int r = -1;
    vector<int> h(N, 0);
    for (auto &elem: h) {
        cin >> elem; // 0 <= elem <= 10^9
        if (r < elem)
            r = elem;
    }

    int res = 0;
    while (l <= r) {//O(log r)
        int mid = (l + r) >> 1;

        long long sum = 0;
        for (const auto &elem: h) {//O(N)
            if (elem > mid)
                sum += elem - mid;
        }

        if (sum >= M) {
            res = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    cout << res;

    return 0;
}

/*
1 5
5
0

1 5
6
1
 */