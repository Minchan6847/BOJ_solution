//
// Created by Minchan Kim on 2022/05/20.
//
// time over 예상
#include <iostream>
#include <unordered_map>
#include <vector>

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

        int num_of_kind = static_cast<int>(um.size());

        vector<int> v;
        for (const auto &elem: um)
            v.emplace_back(elem.second);

        // 모든 부분 집합의 곱을 합산 (공집합 제외)
        // 부분집합의 개수: 2^n
        // reference: https://royhelen.tistory.com/29
        // wrost case --> 30 * 2^30 = 30 * 10^9 => 약 300 초
        int res = 0;
        for (int i = 1; i < (1 << num_of_kind); ++i) {
            int temp = 1;
            for (int j = 0; j < num_of_kind; ++j) {
                if (i & (1 << j))
                    temp *= v[j];
            }
            res += temp;
        }

        cout << res << '\n';
    }

    return 0;
}
