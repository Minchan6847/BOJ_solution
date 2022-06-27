//
// Created by Minchan Kim on 2022/06/27.
//
// 2,024 KB, 0 ms
#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;

    queue<int> q;

    while (N--) {
        string cmd;
        cin >> cmd;

        if (cmd[0] == 'p') {
            if (cmd[1] == 'u') {// push
                int num;
                cin >> num;
                q.emplace(num);
            } else {// pop
                if (q.empty())
                    cout << -1;
                else {
                    cout << q.front();
                    q.pop();
                }
                cout << '\n';
            }
        } else {
            switch (cmd[0]) {
                case 's':// size
                    cout << q.size();
                    break;
                case 'e':// empty
                    cout << q.empty();
                    break;
                case 'f':// front
                    if (q.empty())
                        cout << -1;
                    else
                        cout << q.front();
                    break;
                case 'b':// back
                    if (q.empty())
                        cout << -1;
                    else
                        cout << q.back();
                    break;
                default:
                    break;
            }
            cout << '\n';
        }
    }

    return 0;
}
