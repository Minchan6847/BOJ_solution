//
// Created by Minchan Kim on 2022/05/10.
//
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N = 0;
    cin >> N;

    int num_of_group_word = N;
    for (int i = 0; i < N; ++i) {
        string word("");
        cin >> word;

        int freq[26] = {0,};
        freq[*word.cbegin() - 97]++;
        for (string::const_iterator citr = word.cbegin() + 1; citr != word.cend(); ++citr) {
            if (*citr != *(citr - 1) && freq[*citr - 97]++) {
                num_of_group_word--;
                break;
            }
        }
    }

    cout << num_of_group_word;

    return 0;
}
