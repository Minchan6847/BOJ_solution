//
// Created by Minchan Kim on 2022/05/11.
//
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string A(""), B("");
    cin >> A >> B;

    int big = 0;
    if (A.size() > B.size()) {
        B.insert(0, A.size() - B.size(), '0');
        big = A.size();
    } else {
        A.insert(0, B.size() - A.size(), '0');
        big = B.size();
    }

    string ans("");

    int sum = 0, carry = 0;
    for (int i = 1; i <= big; ++i) {
        sum = A.at(A.size() - i) + B.at(B.size() - i) + carry - 48 * 2;
        carry = sum / 10;
        ans.insert(0, 1, sum % 10 + 48);
    }
    if (carry)
        ans.insert(0, 1, '1');

    cout << ans;

    return 0;
}
