//
// Created by Minchan Kim on 2022/06/08.
//
// 2,024 KB, 0 ms
#include <iostream>
#include <deque>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;

    deque<int> dq;

    while (N--) {
        string s;
        cin >> s;

        if (s[1] == 'u') {//push_*
            int temp;
            cin >> temp;
            if (s[5] == 'f')//*front
                dq.emplace_front(temp);
            else//*back
                dq.emplace_back(temp);
        } else {
            if (s[1] == 'o') {//pop_*
                if (dq.empty())
                    cout << -1;
                else {
                    if (s[4] == 'f') {//*front
                        cout << dq.front();
                        dq.pop_front();
                    } else {//*back
                        cout << dq.back();
                        dq.pop_back();
                    }
                }
            } else {
                switch (s[0]) {
                    case 's'://size
                        cout << dq.size();
                        break;
                    case 'e'://empty
                        cout << dq.empty();
                        break;
                    case 'f'://front
                        if (dq.empty())
                            cout << -1;
                        else
                            cout << dq.front();
                        break;
                    default://back
                        if (dq.empty())
                            cout << -1;
                        else
                            cout << dq.back();
                        break;
                }
            }
            cout << '\n';
        }
    }

    return 0;
}
