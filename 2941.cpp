//
// Created by Minchan Kim on 2022/05/10.
//
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string input("");
    cin >> input;

    int alphabet_cnt = 0;
    for (string::const_iterator citr = input.cbegin(); citr != input.cend(); ++citr) {
        if (*citr >= 'a' && *citr <= 'z') {
            alphabet_cnt++;
            if (*citr == 'd' && *(citr + 1) == 'z' && *(citr + 2) == '=')
                citr += 2;
            else if (*citr == 'l' && *(citr + 1) == 'j')
                citr++;
            else if (*citr == 'n' && *(citr + 1) == 'j')
                citr++;
        }
    }

    cout << alphabet_cnt;

    return 0;
}
