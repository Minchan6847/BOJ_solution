//
// Created by Minchan Kim on 2022/05/09.
//
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string input("");
    getline(cin, input);

    int word_cnt = 0;
    if (input.size() == 1) {
        if (input.at(0) != ' ')
            word_cnt++;
    } else if (input.size() > 1) {
        word_cnt++;
        for (string::const_iterator citr = input.cbegin() + 1; citr != input.cend() - 1; ++citr) {
            if (*citr == ' ')
                word_cnt++;
        }
    }

    cout << word_cnt;

    return 0;
}
