//
// Created by Minchan Kim on 2022/06/07.
//
// 2,020 KB, 0 ms
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;

    queue<int> q;
    vector<int> cnt(10, 0);

    while (T--) {
        int N, M;
        cin >> N >> M;

        while (N--) {
            int temp;
            cin >> temp;
            q.emplace(temp);
            cnt[temp]++;
        }

        int num;
        int res = 0;
        while (true) {
            int do_not_print = 0;
            num = q.front();

            for (int j = num + 1; j <= 9; ++j) {
                if (cnt[j]) {
                    q.pop();
                    q.emplace(num);
                    do_not_print = 1;
                    if (!M)
                        M = q.size();
                    break;
                }
            }

            if (!do_not_print) {
                q.pop();
                cnt[num]--;
                res++;
                if (!M)
                    break;
            }

            M--;
        }

        cout << res << '\n';
        for (auto itr = cnt.begin() + 1; itr != cnt.end(); ++itr)
            *itr = 0;
        while (!q.empty())
            q.pop();
    }

    return 0;
}
