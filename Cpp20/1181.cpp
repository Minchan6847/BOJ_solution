//
// Created by Minchan Kim on 2022/05/16.
//
// memory: 4308 KB, time: 24 ms
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool lessLength(const string &a, const string &b) {
    return a.size() < b.size();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N = 0;
    cin >> N;
    vector<string> v(N);
    for (int i = 0; i < N; ++i)
        cin >> v[i];

    sort(v.begin(), v.end());
    stable_sort(v.begin(), v.end(), lessLength);

    cout << v[0] << '\n';
    for (vector<string>::const_iterator citr = v.cbegin() + 1; citr != v.cend(); citr++)
        if (*(citr - 1) != *citr)
            cout << *citr << '\n';

    return 0;
}
