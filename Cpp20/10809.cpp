//
// Created by Minchan Kim on 2022/05/08.
//
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string S("");
    cin >> S;

    int position[26] = {0,};
    fill_n(position, 26, 200);
    for (int i = 0; i < S.size(); ++i) {
        if (position[S.at(i) - 97] > i)
            position[S.at(i) - 97] = i;
    }

    for (int i = 0; i < 26; ++i) {
        cout << (position[i] == 200 ? -1 : position[i]) << " ";
    }

    return 0;
}
