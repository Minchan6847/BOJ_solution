//
// Created by Minchan Kim on 2022/06/09.
//
// 2,716 KB, 64 ms
#include <iostream>
#include <deque>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int reverse = 0;
        string p;
        cin >> p;
        int n;
        cin >> n;

        deque<int> dq(n, 0);
        char c;
        cin >> c;
        for (auto &elem: dq)
            cin >> elem >> c;
        if (!n)
            cin >> c;

        int error = 0;
        for (const auto &elem: p) { //  O(size of p)
            if (elem == 'R')
                reverse = reverse ? 0 : 1;
            else {
                if (dq.empty()) {
                    error = 1;
                    break;
                } else {
                    if (reverse)
                        dq.pop_back();
                    else
                        dq.pop_front();
                }
            }
        }

        if (error)
            cout << "error\n";
        else {
            cout << '[';
            if (!dq.empty()) {
                if (reverse) {
                    for (auto critr = dq.crbegin(); critr != dq.crend() - 1; ++critr)
                        cout << *critr << ',';
                    cout << dq.front();
                } else {
                    for (auto citr = dq.cbegin(); citr != dq.cend() - 1; ++citr)
                        cout << *citr << ',';
                    cout << dq.back();
                }
            }
            cout << "]\n";
        }
    }

    return 0;
}

/*
test case

1
D
1
[2]
[]
 */
