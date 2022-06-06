//
// Created by Minchan Kim on 2022/06/05.
//
#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;

    stack<int> s;

    string command;
    int temp;
    while (N--) {
        cin >> command;

        if (command == "push") {
            cin >> temp;
            s.emplace(temp);
        } else { // command[0]만 확인해도 될 듯
            if (command == "pop") {
                if (!s.empty()) {
                    cout << s.top();
                    s.pop();
                } else
                    cout << -1;
            } else if (command == "size") {
                cout << s.size();
            } else if (command == "empty") {
                cout << s.empty();
            } else { // top
                if (!s.empty())
                    cout << s.top();
                else
                    cout << -1;
            }

            cout << '\n';
        }
    }

    return 0;
}
