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

    int K;
    cin >> K;

    stack<int> s;
    int temp;
    while (K--) {
        cin >> temp;
        if (temp)
            s.emplace(temp);
        else
            s.pop();
    }

    int sum = 0;
    while (!s.empty()) {
        sum += s.top();
        s.pop();
    }

    cout << sum;

    return 0;
}
