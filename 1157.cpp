//
// Created by Minchan Kim on 2022/05/08.
//
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string word("");
    cin >> word;
    int freq[26] = {0,};
    for (string::iterator itr = word.begin(); itr != word.end(); ++itr) {
        if (*itr < 97)
            *itr += 32;
        freq[*itr - 97]++;
    }

    int max = 0, position = 0;
    for (int i = 0; i < 26; ++i) {
        if (freq[i] > max) {
            max = freq[i];
            position = i;
        }
    }

    int max_cnt = 0;
    for (int i = 0; i < 26; ++i) {
        if (freq[i] == max) {
            if (++max_cnt > 1) {
                cout << "?";
                return 0;
            }
        }
    }

    cout << static_cast<char>(position + 65);

    return 0;
}

// 65:A / 97: a