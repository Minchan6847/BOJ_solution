//
// Created by Minchan Kim on 2022/05/18.
//
// wrong answer
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int K;
    cin >> K;

    vector<pair<int, int>> v(6);
    int max_x = 0, max_y = 0;
    for (int i = 0; i < 6; ++i) {
        int direction, len;
        cin >> direction >> len;

        v[i] = {direction, len};

        if (direction == 1 || direction == 2) {
            if (max_x < len)
                max_x = len;
        } else {
            if (max_y < len)
                max_y = len;
        }
    }

    vector<pair<int, int>> v2(v);
    v2.insert(v2.cend(), v.cbegin(), v.cbegin() + 3);
    int small = 0;
    for (auto itr = v.begin(); itr != v.end(); ++itr) {
        switch (itr->first) {
            case 1:
                if ((itr + 1)->first == 4 && (itr + 2)->first == 1 && (itr + 3)->first == 4)
                    small = (itr + 1)->second * (itr + 2)->second;
                break;
            case 2:
                if ((itr + 1)->first == 3 && (itr + 2)->first == 2 && (itr + 3)->first == 3)
                    small = (itr + 1)->second * (itr + 2)->second;
                break;
            case 3:
                if ((itr + 1)->first == 1 && (itr + 2)->first == 3 && (itr + 3)->first == 1)
                    small = (itr + 1)->second * (itr + 2)->second;
                break;
            case 4:
                if ((itr + 1)->first == 2 && (itr + 2)->first == 4 && (itr + 3)->first == 2)
                    small = (itr + 1)->second * (itr + 2)->second;
                break;
        }
        if (small) {
            cout << (max_x * max_y - small) * K;
            return 0;
        }
    }

    return 0;
}
