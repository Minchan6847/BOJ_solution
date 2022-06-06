//
// Created by Minchan Kim on 2022/06/05.
//
// 2,804 KB, 24 ms
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;

    vector<int> distance(N - 1, 0);
    for (auto &elem: distance)
        cin >> elem;

    vector<int> price_per_litre(N, 0);
    for (auto &elem: price_per_litre)
        cin >> elem;

    long long res = 0;
    int price = price_per_litre[0];
    for (int i = 0; i < N - 1; ++i) {
        if (price_per_litre[i] < price)
            price = price_per_litre[i];
        res += static_cast<long long>(price) * static_cast<long long>(distance[i]);
    }

    cout << res;

    return 0;
}
