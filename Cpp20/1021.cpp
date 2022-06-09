//
// Created by Minchan Kim on 2022/06/08.
//
// 2,024 KB, 0 ms
#include <iostream>
#include <deque>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M;
    cin >> N >> M;

    deque<int> dq;
    for (int i = 1; i <= N; ++i)
        dq.emplace_back(i);

    //O(M*N*(N/2)), 1 <= M <= N <= 50
    int res = 0;
    while (M--) {
        int num;
        cin >> num;

        for (int i = 0; i < dq.size(); ++i) {
            if (num == dq[i]) {
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

/*
// O(M * N)
// deque 대신 now 도입해서 push, pop 과정 생략
// 제출 번호: 44339801, ID: hoyyang22
// 2,024 KB, 0 ms
#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n, m, now, idx, len, ans;
    vector <int> arr, erase;

    cin >> n >> m;
    erase.assign(n, 0);
    for (int i = 0; i < n; i++) {
        arr.emplace_back(i + 1);
    }
    for (int i = 0; i < m; i++) {
        cin >> erase[i];
    }

    now = 0;
    ans = 0;
    for (int i = 0; i < m; i++) {
        len = arr.size();
        for (int j = 0; j < len; j++) {
            if (erase[i] == arr[j]) {
                idx = j;
                break;
            }
        }

        ans += min(abs(now - idx), len - abs(now - idx));
        now = idx;
        arr.erase(arr.begin() + idx);
    }

    cout << ans << '\n';
}

void optimize()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main()
{
    optimize();
    solve();
    return 0;
}

 */