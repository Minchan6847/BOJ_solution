//
// Created by Minchan Kim on 2022/05/17.
//
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;
    vector<int> v(N);
    for (int i = 0; i < N; ++i) {
        int temp;
        cin >> temp;
        v[i] = temp;
    }

    sort(v.begin(), v.end());

    int M;
    cin >> M;
    for (int i = 0; i < M; ++i) {
        int temp;
        cin >> temp;
        cout << upper_bound(v.begin(), v.end(), temp) - lower_bound(v.begin(), v.end(), temp) << ' ';
    }

    return 0;
}
