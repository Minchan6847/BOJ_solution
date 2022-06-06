//
// Created by Minchan Kim on 2022/06/06.
//
// 8,416 KB, 356 ms
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
    string s;
    int temp;
    while (N--) {
        cin >> s;
        if (s == "push") {
            cin >> temp;
            q.emplace(temp);
        } else {
            switch (s[0]) {
                case 'p'://pop
                    if (q.empty())
                        cout << -1;
                    else {
                        cout << q.front();;
                        q.pop();
                    }
                    break;
                case 's'://size
                    cout << q.size();
                    break;
                case 'e'://empty
                    cout << q.empty();
                    break;
                case 'f'://front
                    if (q.empty())
                        cout << -1;
                    else
                        cout << q.front();;
                    break;
                default://back
                    if (q.empty())
                        cout << -1;
                    else
                        cout << q.back();;
                    break;
            }
            cout << '\n';
        }
    }

    return 0;
}


/*
if (s[0] == 'p') {//pop
                if (q.empty())
                    cout << -1;
                else {
                    cout << q.front();;
                    q.pop();
                }
            } else if (s[0] == 's') {//size
                cout << q.size();
            } else if (s[0] == 'e') {//empty
                cout << q.empty();
            } else if (s[0] == 'f') {//front
                if (q.empty())
                    cout << -1;
                else
                    cout << q.front();;
            } else {//back
                if (q.empty())
                    cout << -1;
                else
                    cout << q.back();;
            }
 */