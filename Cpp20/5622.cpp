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

    int min_time = 0;
    for (string::const_iterator citr = input.cbegin(); citr != input.cend(); ++citr) {
        if (*citr < 'S')
            min_time += 3 + (*citr - 65) / 3;
        else if (*citr == 'S')
            min_time += 3 + (*citr - 65) / 3 - 1;
        else if (*citr < 'Z')
            min_time += 3 + (*citr - 66) / 3;
        else if (*citr == 'Z')
            min_time += 3 + (*citr - 66) / 3 - 1;
    }

    cout << min_time;

    return 0;
}

// A: 65