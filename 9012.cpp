//
// Created by Minchan Kim on 2022/06/05.
//
// 2,024 KB, 0 ms
#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;

    stack<int> s;
    string PS;
    while (T--) {
        cin >> PS;
        int not_VPS = 0;

        for (const auto &elem: PS) {
            if (elem == '(')
                s.emplace(1);
            else if (elem == ')') {
                if (!s.empty())
                    s.pop();
                else {
                    not_VPS = 1;
                    break;
                }
            }
        } // VPS이면, for문 종료 후 stack이 비어있음

        if (not_VPS)
            cout << "NO";
        else {
            if (!s.empty()) {
                cout << "NO";
                while (!s.empty())
                    s.pop();
            } else
                cout << "YES";
        }

        cout << '\n';
    }

    return 0;
}

/*
// 제출 번호: 44170818, ID: infikei
// 2,024 KB, 0 ms
#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); // C++와 C 두 표준 입출력 동기화를 해제한다.
    cin.tie(NULL);                    // 입력과 출력이 묶여있는 것을 풀어준다.

    int T;
    cin >> T;

    string s;
    int check;

    for (int t = 0; t < T; t++)
    {
        cin >> s;
        check = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
            {
                check++;
            }
            else if (s[i] == ')')
            {
                check--;
                if (check < 0)
                {
                    break;
                }
            }
        }

        if (check == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}

 */