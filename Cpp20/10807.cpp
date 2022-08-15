//
// Created by Minchan Kim on 2022/08/15.
//
// 2,020 KB, 0 ms
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> vec(N, 0);
    for (auto &elem: vec)
        cin >> elem;

    int v, res = 0;
    cin >> v;

    for (const auto &elem: vec)
        if (v == elem)
            res++;

    cout << res;

    return 0;
}
