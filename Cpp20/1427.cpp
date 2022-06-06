//
// Created by Minchan Kim on 2022/05/15.
//
#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N = 0;
    cin >> N;

    vector<int> v;
    for (int i = N; i > 0; i /= 10)
        v.emplace_back(i % 10);

    sort(v.begin(), v.end(), greater<>());

    for (const auto &elem: v)
        cout << elem;

    return 0;
}
