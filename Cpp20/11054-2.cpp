//
// Created by Minchan Kim on 2022/05/25.
//
// 2,152 KB, 4 ms
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;

    vector<int> v(N + 1, 0);
    for (int i = 1; i <= N; ++i)
        cin >> v[i];

    vector<int> dpL(N + 1, 1);
    vector<int> dpG(N + 1, 1);
    // dpL[i]: 왼쪽 부터 v[i]까지의 가장 긴 증가하는 부분 수열의 길이 (v[i] 포함)
    // dpL[i]: 오른쪽 부터 v[i]까지의 가장 긴 증가하는 부분 수열의 길이 (v[i] 포함)

    for (int i = 2; i <= N; ++i) {
        for (int j = 1; j < i; ++j) {
            if (v[j] < v[i] && dpL[i] <= dpL[j])
                dpL[i] = dpL[j] + 1;
        }
    }

    for (int i = N - 1; i >= 1; --i) {
        for (int j = N; j > i; --j) {
            if (v[i] > v[j] && dpG[i] <= dpG[j])
                dpG[i] = dpG[j] + 1;
        }
    }

    int res = 1;
    for (int i = 1; i <= N; ++i) {
        int temp = dpL[i] + dpG[i];
        if (res < temp)
            res = temp;
    }

    cout << res - 1;

    return 0;
}
