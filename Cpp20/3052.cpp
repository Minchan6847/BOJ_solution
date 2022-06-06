//
// Created by Minchan Kim on 2022/05/07.
//
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int input = 0;
    int remainder_cnt[42] = {0,};
    int result = 0;
    for (int i = 0; i < 10; ++i) {
        cin >> input;
        if (++remainder_cnt[input % 42] == 1)
            result++;
    }

    cout << result;

    return 0;
}
