//
// Created by Minchan Kim on 2022/06/15.
//
// O(31 * K)
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

    vector<int> v(K, 0);
    for (auto &elem: v)
        cin >> elem;

    // 1 ~ 2^31 - 1 (=2'147'483'647)
    int l = 1;
    int r = 2'147'483'647;
    int res = 1;
    while (true) {//O(log(2^31)) = O(31)
        int mid = l + (r - l) / 2;

        int sum = 0;
        for (const auto &elem: v) {//O(K)
            sum += elem / mid;
            if (sum >= N)
                break;
        }

        if (l == r) {
            if (sum >= N)
                res = mid;
            break;
        } else {
            if (sum >= N) {
                res = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
                if (l > r)
                    break;
            }
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
 */