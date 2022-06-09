//
// Created by Minchan Kim on 2022/06/08.
//
// 2,024 KB, 0 ms
#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<int> v(M, 0);
    for (auto &elem: v)
        cin >> elem;

    deque<int> dq;
    for (int i = 1; i <= N; ++i)
        dq.emplace_back(i);

    //O(M*N*(N/2)), 1 <= M <= N <= 50
    int res = 0;
    for (const auto &elem: v) {
        for (int i = 0; i < dq.size(); ++i) {
            if (elem == dq[i]) {
                if (i <= dq.size() / 2) {
                    for (int j = 0; j < i; ++j) {
                        dq.emplace_back(dq.front());
                        dq.pop_front();
                    }
                    res += i;
                } else {
                    for (int j = 0; j < dq.size() - i; ++j) {
                        dq.emplace_front(dq.back());
                        dq.pop_back();
                    }
                    res += dq.size() - i;
                }
                dq.pop_front();
                break;
            }
        }
    }

    cout << res;

    return 0;
}
