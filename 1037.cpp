//
// Created by Minchan Kim on 2022/05/19.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int cnt;
    cin >> cnt;

    vector<int> v(cnt);
    for (int i = 0; i < cnt; ++i) {
        int num;
        cin >> num;
        v[i] = num;
    }

    sort(v.begin(), v.end());

    if (cnt % 2)
        cout << v[cnt / 2] * v[cnt / 2];
    else
        cout << v[0] * v[cnt - 1];

    return 0;
}
