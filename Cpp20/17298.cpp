//
// Created by Minchan Kim on 2022/06/06.
//
// O(N)
// 14,120 KB, 240 ms
#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;

    vector<int> v(N, 0);
    for (auto &elem: v)
        cin >> elem;

    stack<int> st;
    st.emplace(0);

    vector<int> res(N, 0);
    for (int i = 1; i < N; ++i) {
        while (!st.empty() && v[st.top()] < v[i]) {
            res[st.top()] = v[i];
            st.pop();
        }
        st.emplace(i);
    }
    while (!st.empty()) {
        res[st.top()] = -1;
        st.pop();
    }

    for (const auto &elem: res)
        cout << elem << ' ';

    return 0;
}

/*
1
5
-1
 */