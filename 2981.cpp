//
// Created by Minchan Kim on 2022/05/19.
//
// time over 예상
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    vector<int> v(N);
    for (int i = 0; i < N; ++i)
        cin >> v[i];

    sort(v.begin(), v.end());

    // 1 billion
    for (int i = 2; i <= v[1] - v[0]; ++i) {
        int remainder = v[0] % i;
        int fail = 0;
        for (auto citr = v.cbegin() + 1; citr != v.cend(); ++citr) {
            if (*citr % i != remainder) {
                fail = 1;
                break;
            }
        }
        if (!fail)
            cout << i << ' ';
    }

    return 0;
}
