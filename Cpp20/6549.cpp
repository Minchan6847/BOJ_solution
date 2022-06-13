//
// Created by Minchan Kim on 2022/06/14.
//
// 2,920 KB, 44 ms
// reference: https://st-lab.tistory.com/255
#include <iostream>
#include <vector>

using namespace std;

// O(n * log n)
// 1 ≤ n ≤ 100,000
// n개의 정수 h1, ..., hn (0 ≤ hi ≤ 1,000,000,000)
long long f(const int &l, const int &r, const vector<long long> &v) {
    if (l == r) {
        return v[l];
    } else {
        int mid = l + (r - l) / 2;
        long long temp = max(f(l, mid, v), f(mid + 1, r, v));

        // 가운데부터 시작해서 가장자리로 탐색하며 가장 큰 직사각형 크기 구해냄
        long long height = min(v[mid], v[mid + 1]);
        long long height_post = height;
        int cnt = 2;
        int l_start = mid - 1;
        int r_start = mid + 2;
        long long temp2 = height * cnt;
        while (cnt < r - l + 1) {
            for (int i = l_start; i >= l; --i) {
                if (v[i] >= height) {
                    cnt++;
                    l_start--;
                } else {
                    height_post = v[i];
                    break;
                }
            }
            for (int i = r_start; i <= r; ++i) {
                if (v[i] >= height) {
                    cnt++;
                    r_start++;
                } else {
                    if (height != height_post)// left part에서 height_post의 업데이트가 있었다면 더 큰 거 먼저
                        height_post = max(height_post, v[i]);
                    else// left part에서 height_post의 업데이트가 없었으면
                        height_post = v[i];
                    break;
                }
            }

            temp2 = max(temp2, height * cnt);
            height = height_post;
        }

        return max(temp, temp2);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while (true) {
        int n;
        cin >> n;
        if (!n)
            break;

        vector<long long> v(n, 0ll);
        for (auto &elem: v)
            cin >> elem;

        cout << f(0, n - 1, v) << '\n';
    }

    return 0;
}

/*
4 2 1 4 5
8

3 1 3 3
6

***
12 3 2 3 4 5 4 3 2 3 1 1 1
18
(2 * 9 = 18)

6 3 2 3 4 5 4
12

6 3 2 3 1 1 1
6

 */