//
// Created by Minchan Kim on 2022/06/05.
//
#include <iostream>
#include <stack>

using namespace std;

bool isBalance(stack<int> &st, const char &c) {
    if (!st.empty()) {
        if (st.top() == c) {
            st.pop();
            return true;
        } else
            return false;
    } else
        return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    stack<int> st;
    while (true) {
        string s;
        getline(cin, s);

        if (s[0] == '.')
            break;

        for (const auto &elem: s) {
            if (elem == '(' || elem == '[')
                st.emplace(elem);
            else if (elem == ')') {
                if (!isBalance(st, '(')) {
                    cout << "no";
                    break;
                }
            } else if (elem == ']') {
                if (!isBalance(st, '[')) {
                    cout << "no";
                    break;
                }
            } else if (elem == '.') {
                if (st.empty())
                    cout << "yes";
                else {
                    cout << "no";
                }
            }
        }

        while (!st.empty())
            st.pop();
        cout << '\n';
    }

    return 0;
}
