//
// Created by Minchan Kim on 2022/05/14.
//
// using iterator
// memory: 8296 KB, time: 284 ms
// using range-based for loop
// memory: 8296 KB, time: 284 ms
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N = 0;
    cin >> N;

    vector<int> v;

    int num = 0;
    for (int i = 0; i < N; ++i) {
        cin >> num;
        v.emplace_back(num);
    }

    sort(v.begin(), v.end());

    /*
    for (vector<int>::const_iterator citr = v.cbegin(); citr != v.cend(); ++citr)
        cout << *citr << '\n';
        */

    for (const auto &elem: v)
        cout << elem << '\n';

    return 0;
}
