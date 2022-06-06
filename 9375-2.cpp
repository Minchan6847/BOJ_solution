//
// Created by Minchan Kim on 2022/05/20.
//
#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        unordered_map<string, int> um;
        int n;
        cin >> n;

        while (n--) {
            string name, kind;
            cin >> name >> kind;
            um[kind]++;
        }

        int res = 1;
        for (const auto &elem: um)
            res *= elem.second + 1;

        cout << res - 1 << '\n'; // 알몸인 경우를 제외
    }

    return 0;
}
