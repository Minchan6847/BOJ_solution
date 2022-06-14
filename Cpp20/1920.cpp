//
// Created by Minchan Kim on 2022/06/15.
//
// hash map
// 6,820 KB, 60 ms
#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    unordered_set<int> us;

    int N;
    cin >> N;
    while (N--) {
        int temp;
        cin >> temp;
        us.emplace(temp);//O(1)
    }

    int M;
    cin >> M;
    while (M--) {
        int temp;
        cin >> temp;
        cout << us.count(temp) << '\n';//O(1)
    }

    return 0;
}
