//
// Created by Minchan Kim on 2022/06/15.
//
// reference: https://cocoon1787.tistory.com/288
// O(K * log r)
// 2,180 KB, 0 ms
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int K, N;
    cin >> K >> N;

    int r = 0;
    vector<int> v(K, 0);
    for (auto &elem: v) {
        cin >> elem;
        if (r < elem)
            r = elem;
    }

    int l = 1;
    int res = 1;
    while (l <= r) {//O(log r)
        int mid = l + (r - l) / 2;
        int sum = 0;
        for (const auto &elem: v)//O(K)
            sum += elem / mid;

        if (l == r) {
            if (sum >= N)
                res = mid;
            break;
        } else {
            if (sum >= N) {
                res = mid;
                l = mid + 1;
            } else
                r = mid - 1;
        }
    }

    cout << res;

    return 0;
}

/*
input:
4 3
802
743
457
539
output:
539


1 1
2147483647
2147483647

 */