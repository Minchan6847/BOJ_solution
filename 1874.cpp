//
// Created by Minchan Kim on 2022/06/06.
//
// 2,944 KB, 20 ms
#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v(n, 0);
    for (auto &elem: v)
        cin >> elem;

    stack<int> st;
    vector<char> op;
    int pos = 0;
    for (int i = 1; i <= n; ++i) {
        st.emplace(i);
        op.emplace_back('+');

        if (st.top() > v[pos])
            break;

        while (!st.empty() && pos < n && st.top() == v[pos]) {
            st.pop();
            op.emplace_back('-');
            pos++;
        }
    }

    if (st.empty())
        for (const auto &elem: op)
            cout << elem << '\n';
    else
        cout << "NO";

    return 0;
}

/*
// 다른 방식 풀이
// 제출 번호: 44171779, ID: infikei
// 2,896 KB, 12 ms
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); // C++와 C 두 표준 입출력 동기화를 해제한다.
    cin.tie(NULL);                    // 입력과 출력이 묶여있는 것을 풀어준다.

    int n, input, max = 0;
    stack<int> st;
    bool check = true;
    string ans = "";

    cin >> n;

    for (int line = 0; line < n; line++)
    {
        cin >> input;
        while (input > max)
        {
            max++;
            st.push(max);
            ans += "+\n";
        }
        if (input == st.top())
        {
            st.pop();
            ans += "-\n";
        }
        else
        {
            check = false;
            break;
        }
    }

    if (check)
        cout << ans << "\n";
    else
        cout << "NO\n";

    return 0;
}

 */

/*
// 같은 방식 풀이 (cnt 참고, 내 코드에선 pos)
// 제출 번호: 44141113, ID: wnsah814
// 2,944 KB, 20 ms
#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    int n; cin >> n;
    vector<int> v(n);
    stack<int> s;
    vector<char> ans;
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    for (int i = 1; i <= n; ++i) {
        s.push(i);
        ans.push_back('+');

        while (!s.empty() && s.top() == v[cnt]) {
            s.pop();
            ans.push_back('-');
            cnt++;
        }
    }

    if (!s.empty()) cout << "NO";
    else {
        for (char c : ans) {
            cout << c << '\n';
        }
    }

    return 0;
}

 */