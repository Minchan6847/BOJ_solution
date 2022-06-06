//
// Created by Minchan Kim on 2022/05/31.
//
//  하다가 말음. 너무 어렵게 생각했음.
#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cout << "";

    int N;
    cin >> N;

    map<int, int> m;

    while (N--) {
        int start, stop;
        cin >> start >> stop;
        if (m.count(start)) {
            if (m[start] > stop)
                m[start] = stop;
        } else
            m[start] = stop;
    }

    vector<int> v;

    int res = 0;
    for (auto critr = m.crbegin(); critr != m.crend(); ++critr) {
        int position = (*critr).first;
        int cnt = 1;

        for (auto critr2 = ++critr; critr2 != m.crend(); ++critr2) {
            if (position >= (*critr2).second) {
                position = (*critr2).first;
                cnt++;
            }
        }
        if(res < cnt)
            res = cnt;
    }

    // debugging
    for (const auto &elem: m) {
        cout << elem.first << ' ' << elem.second << '\n';
    }

    cout << res;

    return 0;
}
