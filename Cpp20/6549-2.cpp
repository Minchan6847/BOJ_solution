//
// Created by Minchan Kim on 2022/06/14.
//
// 2,920 KB, 48 ms
// reference: https://st-lab.tistory.com/255
#include <iostream>
#include <vector>

using namespace std;

// O(n * log n)
// 1 ≤ n ≤ 100,000
// n개의 정수 h1, ..., hn (0 ≤ hi ≤ 1,000,000,000)
long long DC(const int &l, const int &r, const vector<long long> &v) {
    if (l == r) {
        return v[l];
    } else {
        int mid = l + (r - l) / 2;
        long long temp = max(DC(l, mid, v), DC(mid + 1, r, v));

        // 가운데부터 시작해서 가장자리로 탐색하며 가장 큰 직사각형 크기 구해냄
        long long height = v[mid];
        int l_search = mid - 1;
        int r_search = mid + 1;
        long long max_area = height;
        int width = 1;
        while (width < r - l + 1) {
            width++;
            if ((l_search >= l && v[l_search] > v[r_search]) || r_search > r) {
                height = min(height, v[l_search]);
                l_search--;
            } else {
                height = min(height, v[r_search]);
                r_search++;
            }
            max_area = max(max_area, height * static_cast<long long>(width));
        }

        return max(temp, max_area);
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

        cout << DC(0, n - 1, v) << '\n';
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