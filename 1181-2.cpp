//
// Created by Minchan Kim on 2022/05/16.
//
// memory: 3976 KB, time: 24 ms
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool myLess(const string &a, const string &b) {
    if (a.size() < b.size())
        return true;
    else if (a.size() == b.size())
        return a < b;
    else
        return false;
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

    sort(v.begin(), v.end(), myLess);

    cout << v[0] << '\n';
    for (vector<string>::const_iterator citr = v.cbegin() + 1; citr != v.cend(); citr++)
        if (*(citr - 1) != *citr)
            cout << *citr << '\n';

    return 0;
}
