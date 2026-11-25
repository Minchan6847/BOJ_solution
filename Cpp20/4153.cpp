//
// Created by Minchan Kim on 2022/05/18.
//
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<int> v(3);
    while (true) {
        cin >> v[0];
        if (!v[0])
            break;
        cin >> v[1] >> v[2];

        sort(v.begin(), v.end());

        if (v[0] * v[0] + v[1] * v[1] == v[2] * v[2])
            cout << "right\n";
        else
            cout << "wrong\n";
    }

    return 0;
}
